// FUN_01266fd8 @ 01266fd8 size=188 calls_out=2 calls_in=1
// strings: Hashboard

void FUN_01266fd8(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_3 == 3) {
    iVar2 = thunk_FUN_01bed842(param_2,"Fan",3);
    if (iVar2 == 0) {
      uVar1 = 1;
LAB_01267084:
      param_1[1] = uVar1;
      uVar1 = 0;
      goto LAB_0126708c;
    }
  }
  else if (param_3 == 9) {
    iVar2 = thunk_FUN_01bed842(param_2,"Hashboard",9);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_0126708c;
    }
  }
  else {
    piVar5 = param_2;
    piVar3 = (int *)param_1;
    if (param_3 == 4) {
      piVar3 = (int *)*param_2;
      piVar5 = (int *)0x70696843;
    }
    if (param_3 == 4 && piVar3 == piVar5) {
      uVar1 = 2;
      goto LAB_01267084;
    }
  }
  uVar4 = FUN_01265080(param_2,param_3,&DAT_01c2531c,3);
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar1 = 1;
LAB_0126708c:
  *param_1 = uVar1;
  return;
}

