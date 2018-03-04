//
//  AppDelegate.swift
//  EmbeddedBasketball
//
//  Created by Mark Kreitler on 2/25/18.
//  Copyright © 2018 Mark Kreitler. All rights reserved.
//
import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    @objc var currentUnityController: UnityAppController?
    var application: UIApplication?
    var isUnityRunning = false
    var window: UIWindow?
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey : Any]? = nil) -> Bool {
        
        self.application = application
        unity_init(CommandLine.argc, CommandLine.unsafeArgv)
        SetUiDelegate();
        currentUnityController = UnityAppController();
        
        if (currentUnityController != nil) {
            currentUnityController!.application(application, didFinishLaunchingWithOptions: launchOptions)
        }
        else {
            NSLog("Current Unity controller not found!");
        }
        
        // first call to startUnity will do some init stuff, so just call it here and directly stop it again
        startUnity()
        stopUnity()
        
        return true
    }
    
    func applicationWillResignActive(_ application: UIApplication) {
        if isUnityRunning {
            currentUnityController?.applicationWillResignActive(application)
        }
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        if isUnityRunning {
            currentUnityController?.applicationDidEnterBackground(application)
        }
    }
    
    func applicationWillEnterForeground(_ application: UIApplication) {
        if isUnityRunning {
            currentUnityController?.applicationWillEnterForeground(application)
        }
    }
    
    func applicationDidBecomeActive(_ application: UIApplication) {
        if isUnityRunning {
            currentUnityController?.applicationDidBecomeActive(application)
        }
    }
    
    func applicationWillTerminate(_ application: UIApplication) {
        if isUnityRunning {
            currentUnityController?.applicationWillTerminate(application)
        }
    }
    
    func startUnity() {
        if !isUnityRunning {
            isUnityRunning = true
            currentUnityController!.applicationDidBecomeActive(application!)
        }
    }
    
    func stopUnity() {
        if isUnityRunning {
            currentUnityController!.applicationWillResignActive(application!)
            isUnityRunning = false
        }
    }
}
