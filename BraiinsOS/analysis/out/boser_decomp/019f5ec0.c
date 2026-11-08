// FUN_019f5ec0 @ 019f5ec0 size=200 calls_out=1 calls_in=2
// strings: 

undefined8
FUN_019f5ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte in_Q;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_28 [2];
  uint local_20;
  uint local_1c;
  uint local_18;
  
  uStack_44 = param_6;
  uStack_40 = param_7;
  local_48 = param_5;
  local_38 = param_1;
  uStack_34 = param_2;
  uStack_30 = param_3;
  FUN_019ac248(local_28,&local_48,&local_38);
  uVar2 = (uint)((ulonglong)local_20 * 1000);
  lVar1 = (ulonglong)local_1c * 1000 + ((ulonglong)local_20 * 1000 >> 0x20);
  uVar4 = (uint)lVar1;
  uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
  local_18 = local_18 / 1000000;
  uVar3 = uVar2 + local_18;
  iVar5 = uVar4 + CARRY4(uVar2,local_18);
  if ((local_28[0] & 1) != 0) {
    iVar5 = 0;
    uVar3 = 0;
  }
  bVar8 = (((byte)(CARRY4(uVar4,(uint)CARRY4(uVar2,local_18)) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0;
  iVar7 = uVar6 + bVar8;
  uVar2 = (uint)CARRY4(uVar6,(uint)bVar8);
  if ((local_28[0] & 1) != 0) {
    uVar2 = 0;
    iVar7 = 0;
  }
  uVar4 = 0xfffffffd;
  if (uVar3 < 0xfffffffd) {
    uVar4 = uVar3;
  }
  if (iVar5 == -1) {
    uVar3 = uVar4;
  }
  if ((uint)(iVar7 == 0) <= -uVar2) {
    uVar3 = 0xfffffffd;
    iVar5 = -1;
  }
  return CONCAT44(iVar5,uVar3);
}

