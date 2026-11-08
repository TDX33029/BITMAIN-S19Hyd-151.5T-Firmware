// FUN_01afe3d0 @ 01afe3d0 size=260 calls_out=5 calls_in=6
// strings: 

void FUN_01afe3d0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  uVar6 = FUN_01afddc0(param_1,auStack_24,2,0);
  uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
  if (((int)uVar6 == 0) ||
     (uVar6 = FUN_01afe334(auStack_24), uVar5 = (uint)((ulonglong)uVar6 >> 0x20), (int)uVar6 == 0))
  {
LAB_01afe41c:
    uVar2 = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    pbVar3 = (byte *)FUN_01afd674(auStack_24);
    uVar6 = FUN_01afd684(auStack_24);
    uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
    pbVar4 = pbVar3 + (int)uVar6;
    for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
      uVar5 = *param_2;
      if (param_2[1] >> 0x18 != 0) goto LAB_01afe41c;
      uVar1 = uVar5 >> 0x18;
      uVar5 = uVar5 << 8;
      *param_2 = uVar5;
      param_2[1] = param_2[1] << 8 | uVar1;
      *param_2 = *pbVar3 | uVar5;
    }
    uVar2 = 1;
  }
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar5,local_1c ^ DAT_01d53560,0);
  }
  return;
}

