//
//  ViewController.swift
//
//  Created by Adam Venturella on 10/28/15.
//  Updated by Martin Straub on 15/03/2017.
//

import UIKit

@objc class ViewController: UIViewController {
    @IBOutlet weak var text: UILabel!
    var unityView: UIView?
    var unityComm: IOStoUnityObjC?
    var adId: CInt?
    
    @objc public func setScore(value: Int) {
        text.text = "\(value)";
    }
    
    @IBAction func startUnity(sender: AnyObject) {
        let appDelegate = UIApplication.shared.delegate as! AppDelegate
        
        appDelegate.startUnity()
        
        if (unityComm == nil) {
            unityComm = IOStoUnityObjC()
            unityComm!.setViewController(self)
        }
        
        let adId = unityComm!.randomizeAdId();
        text.text = "\(adId)"
        unityComm!.startResourceLoad();
        
        unityView = UnityGetGLView()!
        
        self.view!.addSubview(unityView!)
        unityView!.translatesAutoresizingMaskIntoConstraints = false
        
        // look, non-full screen unity content!
        let views = ["view": unityView]
        let w = NSLayoutConstraint.constraints(withVisualFormat: "|-20-[view]-20-|", options: [], metrics: nil, views: views)
        let h = NSLayoutConstraint.constraints(withVisualFormat: "V:|-75-[view]-50-|", options: [], metrics: nil, views: views)
        view.addConstraints(w + h)
    }
    
    @IBAction func stopUnity(sender: AnyObject) {
        let appDelegate = UIApplication.shared.delegate as! AppDelegate
        appDelegate.stopUnity()
        unityView!.removeFromSuperview()
    }
}

