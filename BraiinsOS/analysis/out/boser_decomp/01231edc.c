// FUN_01231edc @ 01231edc size=156 calls_out=1 calls_in=1
// strings: enabled | voltage | frequency

void FUN_01231edc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 9) {
    iVar2 = thunk_FUN_01bed842(param_2,"frequency",9);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_01231f58;
    }
  }
  else if (param_3 == 7) {
    iVar2 = thunk_FUN_01bed842(param_2,"enabled",7);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_01231f58;
    }
    iVar2 = thunk_FUN_01bed842(param_2,"voltage",7);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_01231f58;
    }
  }
  uVar1 = 3;
LAB_01231f58:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return;
}

