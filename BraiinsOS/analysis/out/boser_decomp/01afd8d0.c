// FUN_01afd8d0 @ 01afd8d0 size=260 calls_out=3 calls_in=2
// strings: 

void FUN_01afd8d0(undefined4 param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  byte local_29;
  uint local_28;
  int local_24;
  uint local_1c;
  
  local_1c = DAT_01d53560;
  uVar5 = FUN_01afd780(param_1,&local_29,&PTR_01d3b2b0,0);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 != 0) {
    uVar3 = local_29 & 0x1f;
    if (uVar3 == 0x1f) {
      uVar5 = FUN_01afd7e0(param_1,&local_28);
      iVar2 = (int)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        local_24 = local_24 - (uint)(local_28 < 0x1f);
        bVar4 = local_28 - 0x1f < 0x1fffffe1;
        iVar2 = -(local_24 + (uint)!bVar4);
        uVar3 = local_28;
        if ((uint)-local_24 < (uint)bVar4) goto LAB_01afd994;
      }
    }
    else {
LAB_01afd994:
      uVar3 = uVar3 | (local_29 & 0xe0) << 0x18;
      if ((uVar3 & 0xdfffffff) != 0 || param_3 != 0) {
        uVar1 = 1;
        *param_2 = uVar3;
        goto LAB_01afd96c;
      }
    }
  }
  uVar1 = 0;
LAB_01afd96c:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,iVar2,local_1c ^ DAT_01d53560,0);
  }
  return;
}

