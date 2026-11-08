// FUN_0128f5f0 @ 0128f5f0 size=276 calls_out=4 calls_in=2
// strings: 

void FUN_0128f5f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30 [2];
  uint local_28;
  uint local_24;
  int local_20;
  
  local_48 = param_5;
  local_3c = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = param_3;
  uStack_4c = param_4;
  FUN_019ac248(local_30,&local_50,&local_40);
  iVar4 = local_20;
  uVar5 = local_28;
  if ((local_30[0] & 1) != 0) {
    if (local_20 == 0) {
      uVar5 = -local_28;
      iVar4 = 0;
      local_24 = -(local_24 + (local_28 != 0));
    }
    else {
      uVar5 = ~local_28;
      iVar4 = (int)&DAT_3b9aca00 - local_20;
      local_24 = ~local_24;
    }
  }
  uVar8 = FUN_01bf0fb0(uVar5,local_24,0x15180,0);
  lVar1 = (uVar8 & 0xffffffff) * 0x15180;
  uVar3 = (uint)lVar1;
  iVar6 = uVar5 - uVar3;
  iVar7 = local_24 -
          ((int)(uVar8 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) + (uint)(uVar5 < uVar3))
  ;
  iVar2 = iVar7 >> 0x1f;
  lVar1 = uVar8 + CONCAT44(iVar2,iVar2);
  uVar5 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) - (uint)(uVar5 < 0x7ff506c5) != -1) ||
     (iVar2 = FUN_01292134(uVar5 + 0xaf93b,0xaf93b,uVar5 + 0x800af93b), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00405211,0x25,&DAT_01c26400);
  }
  param_1[2] = iVar4;
  if (iVar7 < 0) {
    iVar6 = iVar6 + 0x15180;
  }
  *param_1 = iVar2;
  param_1[1] = iVar6;
  return;
}

