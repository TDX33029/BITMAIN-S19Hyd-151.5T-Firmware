// FUN_0008bdf4 @ 0008bdf4  size=292  callers=1
// program: bmminer


undefined4 FUN_0008bdf4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0008bfb8(param_1,"* = 0, LOG_INFO");
  if ((((((iVar1 == 0) && (iVar1 = FUN_0008bfb8(param_1,"DEBUG = 20, LOG_DEBUG"), iVar1 == 0)) &&
        (iVar1 = FUN_0008bfb8(param_1,"INFO = 40, LOG_INFO"), iVar1 == 0)) &&
       ((iVar1 = FUN_0008bfb8(param_1,"NOTICE = 60, LOG_NOTICE"), iVar1 == 0 &&
        (iVar1 = FUN_0008bfb8(param_1,"WARN = 80, LOG_WARNING"), iVar1 == 0)))) &&
      ((iVar1 = FUN_0008bfb8(param_1,"ERROR = 100, LOG_ERR"), iVar1 == 0 &&
       ((iVar1 = FUN_0008bfb8(param_1,"FATAL = 120, LOG_ALERT"), iVar1 == 0 &&
        (iVar1 = FUN_0008bfb8(param_1,"UNKNOWN = 254, LOG_ERR"), iVar1 == 0)))))) &&
     (iVar1 = FUN_0008bfb8(param_1,"! = 255, LOG_INFO"), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

