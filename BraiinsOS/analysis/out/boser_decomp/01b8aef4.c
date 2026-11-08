// FUN_01b8aef4 @ 01b8aef4 size=732 calls_out=5 calls_in=1
// strings: 

void FUN_01b8aef4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_e4;
  int local_e0;
  uint local_dc;
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [108];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  local_e4 = 0x1f;
  local_e0 = 0xff;
  local_dc = 1;
  *(undefined4 *)(param_1 + 0x404) = 1;
  uVar10 = FUN_01b83dd4(param_1,&local_e0,param_3 + 8,param_4 + -8,&local_dc);
  uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if ((local_dc == 0) && (local_e0 == 0xff)) {
    *(undefined4 *)(param_1 + 0x404) = 2;
  }
  if ((uint)uVar10 < 0xffffff89) {
    iVar5 = param_3 + 8 + (uint)uVar10;
    uVar6 = param_3 + param_4;
    uVar10 = FUN_01b80b50(auStack_d8,&local_e4,&local_dc,iVar5,uVar6 - iVar5);
    uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if ((((uint)uVar10 < 0xffffff89) && (local_dc < 9)) &&
       (uVar11 = FUN_01b82320(param_1 + 0x408,auStack_d8,0x1f,local_dc,param_2,0x2200),
       uVar1 = (undefined4)((ulonglong)uVar11 >> 0x20), (uint)uVar11 < 0xffffff89)) {
      iVar5 = iVar5 + (uint)uVar10;
      local_e0 = 0x34;
      uVar10 = FUN_01b80b50(auStack_98,&local_e0,&local_dc,iVar5,uVar6 - iVar5);
      uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((((uint)uVar10 < 0xffffff89) && (local_dc < 10)) &&
         (uVar11 = FUN_01b82320(param_1 + 0x70c,auStack_98,local_e0,local_dc,param_2,0x2200),
         uVar1 = (undefined4)((ulonglong)uVar11 >> 0x20), (uint)uVar11 < 0xffffff89)) {
        uVar1 = FUN_01b86070(auStack_98,local_e0,0x34);
        iVar5 = iVar5 + (uint)uVar10;
        *(undefined4 *)(param_1 + 0x11e0) = uVar1;
        local_e0 = 0x23;
        uVar10 = FUN_01b80b50(auStack_98,&local_e0,&local_dc,iVar5,uVar6 - iVar5);
        uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar2 = (uint)uVar10;
        if (((uVar2 < 0xffffff89) && (local_dc < 10)) &&
           (uVar10 = FUN_01b82320(param_1 + 0xcb8,auStack_98,local_e0,local_dc,param_2,0x2200),
           uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20), (uint)uVar10 < 0xffffff89)) {
          uVar10 = FUN_01b86070(auStack_98,local_e0,0x23);
          uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
          iVar4 = iVar5 + uVar2;
          uVar7 = iVar4 + 0xc;
          *(int *)(param_1 + 0x11e4) = (int)uVar10;
          if (uVar7 <= uVar6) {
            iVar5 = *(int *)(iVar5 + uVar2);
            uVar6 = uVar6 - uVar7;
            *(int *)(param_1 + 0x11e8) = iVar5;
            bVar9 = uVar6 < 0xfffe0000;
            if (bVar9) {
              iVar3 = uVar6 + 0x20000;
            }
            else {
              iVar3 = 0x1f;
            }
            iVar8 = *(int *)(iVar4 + 4);
            if (bVar9) {
              iVar3 = LZCOUNT(iVar3);
            }
            *(int *)(param_1 + 0x11ec) = iVar8;
            if (bVar9) {
              iVar3 = 0x1f - iVar3;
            }
            iVar4 = *(int *)(iVar4 + 8);
            *(int *)(param_1 + 0x11f0) = iVar4;
            uVar10 = FUN_01b86070(auStack_d8,local_e4,iVar3);
            uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
            *(int *)(param_1 + 0x11dc) = (int)uVar10;
            if (((iVar5 - 1U < uVar6) && (iVar8 - 1U < uVar6)) && (iVar4 - 1U < uVar6)) {
              param_3 = uVar7 - param_3;
              goto LAB_01b8b040;
            }
          }
        }
      }
    }
  }
  param_3 = -0x1e;
LAB_01b8b040:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(param_3,uVar1,local_2c ^ DAT_01d53560,0);
  }
  return;
}

