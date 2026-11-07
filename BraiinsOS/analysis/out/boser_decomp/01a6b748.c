// FUN_01a6b748 @ 01a6b748 size=136 calls_out=3 calls_in=2
// strings: 

void FUN_01a6b748(int *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  bVar1 = FUN_019ec70c();
  FUN_01a6b804(&local_28,param_2 + 0x50,param_3);
  if (local_28 == 3) {
    iVar2 = FUN_019ee264(bVar1 == 2 | bVar1 & 1,param_2,*param_3);
    iVar3 = 3;
    if (iVar2 != 0) {
      iVar3 = 4;
    }
    *param_1 = iVar3;
  }
  else {
    *param_1 = local_28;
    param_1[1] = iStack_24;
    param_1[2] = iStack_20;
    param_1[3] = iStack_1c;
  }
  return;
}

