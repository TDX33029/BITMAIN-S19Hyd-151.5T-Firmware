// FUN_011bcdb4 @ 011bcdb4 size=240 calls_out=4 calls_in=2
// strings: 

void FUN_011bcdb4(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = *(undefined1 *)((int)param_2 + 0x1d);
  iVar2 = param_2[7];
  *(undefined1 *)(param_2 + 7) = 0;
  if ((char)iVar2 == '\x01') {
    iVar2 = *param_2;
  }
  else {
    FUN_011ef738(&local_28,param_2 + 3);
    if ((local_28 & 0xff) == 5) {
      local_28 = 4;
      uVar3 = FUN_0157c50c(&local_28,param_2[4],param_2[5]);
      *(undefined4 *)(param_1 + 4) = uVar3;
      *param_1 = 1;
      return;
    }
    if ((local_28 & 0xff) != 4) {
      uVar3 = FUN_0157c4a0(local_28,uStack_24);
      *(undefined4 *)(param_1 + 4) = uVar3;
      *param_1 = 1;
      return;
    }
    iVar2 = *param_2;
    uVar1 = local_28._1_1_;
  }
  if (iVar2 != -0x80000000) {
    iVar4 = param_2[2];
    if (iVar4 == iVar2) {
      FUN_006029c0(param_2);
    }
    *(undefined1 *)(param_2[1] + iVar4) = uVar1;
    param_2[2] = iVar4 + 1;
  }
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

