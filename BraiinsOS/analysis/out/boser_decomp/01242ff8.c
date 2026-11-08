// FUN_01242ff8 @ 01242ff8 size=168 calls_out=2 calls_in=1
// strings: enabled | psu_power_limitmin_psu_power_limitevent open/bosminer/bosminer-config/src/support.rs:80

void FUN_01242ff8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 7) {
    iVar2 = thunk_FUN_01bed842(param_2,"enabled",7);
    if (iVar2 != 0) {
LAB_0124307c:
      FUN_0123bfbc(param_1,param_2,param_3,&DAT_01c24c2c,2);
      return;
    }
    *param_1 = 2;
    uVar1 = 0;
  }
  else {
    if ((param_3 != 0xf) ||
       (iVar2 = thunk_FUN_01bed842(param_2,
                                   "psu_power_limitmin_psu_power_limitevent open/bosminer/bosminer-config/src/support.rs:80"
                                   ,0xf), iVar2 != 0)) goto LAB_0124307c;
    *param_1 = 2;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

