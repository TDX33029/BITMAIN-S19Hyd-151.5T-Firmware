// FUN_019d1344 @ 019d1344 size=276 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_019d1344(int param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_58;
  int iStack_54;
  uint uStack_50;
  uint local_48;
  int iStack_44;
  uint uStack_40;
  uint local_38 [2];
  uint local_30;
  uint uStack_2c;
  int iStack_28;
  
  local_48 = *(uint *)(param_1 + 8);
  iStack_44 = *(int *)(param_1 + 0xc);
  uStack_40 = *(uint *)(param_1 + 0x10);
  uVar2 = 0;
  uVar4 = 0;
  bVar1 = uStack_40 <= param_5;
  if (param_3 != local_48 || param_4 != iStack_44) {
    bVar1 = (int)(param_4 - (iStack_44 + (uint)(param_3 < local_48))) < 0 ==
            (SBORROW4(param_4,iStack_44) != SBORROW4(param_4 - iStack_44,(uint)(param_3 < local_48))
            );
  }
  if (bVar1) {
    uStack_50 = param_5;
    local_58 = param_3;
    iStack_54 = param_4;
    FUN_019ac248(local_38,&local_58,&local_48);
    if ((local_38[0] & 1) != 0) {
      uStack_2c = 0;
      local_30 = 0;
    }
    uVar8 = (uint)((ulonglong)uStack_2c * 1000);
    uVar3 = (uint)((ulonglong)local_30 * 1000);
    uVar6 = (uint)((ulonglong)local_30 * 1000 >> 0x20);
    uVar5 = uVar6 + uVar8;
    uVar7 = (iStack_28 + 999999U) / 1000000;
    uVar2 = uVar3 + uVar7;
    uVar4 = uVar5 + CARRY4(uVar3,uVar7);
    if (CARRY4(uVar5,(uint)CARRY4(uVar3,uVar7))) {
      uVar4 = 0xffffffff;
      uVar2 = 0xffffffff;
    }
    if ((local_38[0] & 1) != 0) {
      uVar4 = 0;
      uVar2 = 0;
    }
    if ((int)((ulonglong)uStack_2c * 1000 >> 0x20) != 0 || CARRY4(uVar6,uVar8)) {
      uVar4 = 0xffffffff;
      uVar2 = 0xffffffff;
    }
  }
  uVar7 = *(uint *)(param_1 + 100);
  if (uVar4 <= uVar7 && (uint)(*(uint *)(param_1 + 0x60) <= uVar2) <= uVar4 - uVar7) {
    uVar4 = uVar7;
    uVar2 = *(uint *)(param_1 + 0x60);
  }
  return CONCAT44(uVar4,uVar2);
}

