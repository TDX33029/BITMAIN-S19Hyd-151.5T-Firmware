// FUN_0196a8d8 @ 0196a8d8 size=144 calls_out=3 calls_in=2
// strings: 

void FUN_0196a8d8(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [40];
  
  piVar1 = param_1 + 2;
  if (*param_1 == 0) {
    uVar3 = FUN_01415f98(auStack_38,0,*piVar1,param_1[3]);
  }
  else {
    if (*param_1 != 1) {
      iVar2 = FUN_01afb0f8((int)*(undefined8 *)piVar1,auStack_38);
      (**(code **)(param_2[1] + 0xc))(*param_2,auStack_38,iVar2 - (int)auStack_38);
      return;
    }
    uVar3 = FUN_0196bd9c(auStack_38,1,*piVar1,param_1[3]);
  }
  (**(code **)(param_2[1] + 0xc))(*param_2,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return;
}

