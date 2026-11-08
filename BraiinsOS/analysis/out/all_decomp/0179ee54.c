// FUN_0179ee54 @ 0179ee54 size=856 calls_out=4 calls_in=1
// strings: 

void FUN_0179ee54(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint local_e4;
  uint local_e0;
  undefined4 local_dc;
  short local_d8 [31];
  short sStack_9a;
  short local_98 [54];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  local_e4 = 0x1f;
  *(undefined4 *)(param_1 + 0x404) = 1;
  local_dc = 1;
  local_e0 = 0xff;
  uVar10 = FUN_01795f8c(param_1,&local_e0,param_3 + 8,param_4 + -8,&local_dc);
  psVar2 = (short *)((ulonglong)uVar10 >> 0x20);
  if ((local_dc == 0) && (local_e0 == 0xff)) {
    *(undefined4 *)(param_1 + 0x404) = 2;
  }
  if ((uint)uVar10 < 0xffffff89) {
    iVar7 = param_3 + 8 + (uint)uVar10;
    uVar8 = param_3 + param_4;
    uVar10 = FUN_01792324(local_d8,&local_e4,&local_dc,iVar7,uVar8 - iVar7);
    psVar2 = (short *)((ulonglong)uVar10 >> 0x20);
    if ((((uint)uVar10 < 0xffffff89) && (local_dc < 9)) &&
       (uVar11 = FUN_01793f40(param_1 + 0x408,local_d8,0x1f,local_dc,param_2,0x2200),
       psVar2 = (short *)((ulonglong)uVar11 >> 0x20), (uint)uVar11 < 0xffffff89)) {
      iVar7 = iVar7 + (uint)uVar10;
      local_e0 = 0x34;
      uVar10 = FUN_01792324(local_98,&local_e0,&local_dc,iVar7,uVar8 - iVar7);
      psVar2 = (short *)((ulonglong)uVar10 >> 0x20);
      if ((((uint)uVar10 < 0xffffff89) && (local_dc < 10)) &&
         (uVar11 = FUN_01793f40(param_1 + 0x70c,local_98,local_e0,local_dc,param_2,0x2200),
         psVar2 = (short *)((ulonglong)uVar11 >> 0x20), (uint)uVar11 < 0xffffff89)) {
        if (local_e0 < 0x34) {
LAB_0179f00c:
          uVar4 = 1;
        }
        else {
          psVar2 = &sStack_9a;
          do {
            psVar2 = psVar2 + 1;
            if (*psVar2 == 0) goto LAB_0179f00c;
          } while (psVar2 != local_98 + 0x34);
          uVar4 = 2;
        }
        iVar7 = iVar7 + (uint)uVar10;
        *(undefined4 *)(param_1 + 0x11e0) = uVar4;
        local_e0 = 0x23;
        uVar10 = FUN_01792324(local_98,&local_e0,&local_dc,iVar7,uVar8 - iVar7);
        psVar2 = (short *)((ulonglong)uVar10 >> 0x20);
        uVar6 = (uint)uVar10;
        if (((uVar6 < 0xffffff89) && (local_dc < 10)) &&
           (uVar10 = FUN_01793f40(param_1 + 0xcb8,local_98,local_e0,local_dc,param_2,0x2200),
           psVar2 = (short *)((ulonglong)uVar10 >> 0x20), (uint)uVar10 < 0xffffff89)) {
          if (local_e0 < 0x23) {
LAB_0179f198:
            uVar4 = 1;
          }
          else {
            psVar3 = &sStack_9a;
            psVar2 = local_98 + 0x23;
            do {
              psVar3 = psVar3 + 1;
              if (*psVar3 == 0) goto LAB_0179f198;
            } while (psVar3 != psVar2);
            uVar4 = 2;
          }
          *(undefined4 *)(param_1 + 0x11e4) = uVar4;
          iVar5 = iVar7 + uVar6;
          uVar1 = iVar5 + 0xc;
          if (uVar1 <= uVar8) {
            iVar9 = *(int *)(iVar7 + uVar6);
            uVar8 = uVar8 - uVar1;
            *(int *)(param_1 + 0x11e8) = iVar9;
            iVar7 = *(int *)(iVar5 + 4);
            *(int *)(param_1 + 0x11ec) = iVar7;
            iVar5 = *(int *)(iVar5 + 8);
            if (uVar8 < 0xfffe0000) {
              uVar6 = 0x1f - LZCOUNT(uVar8 + 0x20000);
            }
            else {
              uVar6 = 0x1f;
            }
            *(int *)(param_1 + 0x11f0) = iVar5;
            if (local_e4 < uVar6) {
LAB_0179f1a0:
              uVar4 = 1;
            }
            else {
              psVar3 = (short *)((int)&local_dc + 2);
              do {
                psVar3 = psVar3 + 1;
                psVar2 = (short *)(int)*psVar3;
                if (psVar2 == (short *)0x0) goto LAB_0179f1a0;
              } while (local_d8 + uVar6 != psVar3);
              uVar4 = 2;
            }
            *(undefined4 *)(param_1 + 0x11dc) = uVar4;
            if (((iVar9 - 1U < uVar8) && (iVar7 - 1U < uVar8)) && (iVar5 - 1U < uVar8)) {
              param_3 = uVar1 - param_3;
              goto LAB_0179f060;
            }
          }
        }
      }
    }
  }
  param_3 = -0x1e;
LAB_0179f060:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(param_3,psVar2,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

