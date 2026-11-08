// FUN_0175f518 @ 0175f518 size=780 calls_out=6 calls_in=3
// strings: 

undefined8 FUN_0175f518(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  byte local_620 [168];
  byte abStack_578 [672];
  byte abStack_2d8 [24];
  undefined4 local_2c0 [8];
  char local_2a0;
  char local_29f;
  char local_260;
  char local_25f;
  char local_220;
  char local_21f;
  char local_1e0;
  char local_1df;
  undefined4 auStack_1c0 [4];
  undefined1 auStack_1b0 [388];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  puVar9 = local_2c0;
  do {
    if (puVar9 < param_2) {
      if (param_2 < puVar9 + 8) {
LAB_0175f7b4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x175f7b4);
        (*pcVar1)();
      }
    }
    else if ((puVar9 != param_2) && (puVar9 < param_2 + 8)) goto LAB_0175f7b4;
    puVar10 = puVar9 + 0x10;
    uVar3 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *puVar9 = *param_2;
    puVar9[1] = uVar3;
    puVar9[2] = uVar6;
    puVar9[3] = uVar7;
    uVar3 = param_2[5];
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    puVar9[4] = param_2[4];
    puVar9[5] = uVar3;
    puVar9[6] = uVar6;
    puVar9[7] = uVar7;
    puVar9 = puVar10;
  } while (puVar10 != auStack_1c0);
  uVar13 = 0;
  iVar11 = param_1;
  do {
    uVar4 = uVar13 + 1;
    uVar14 = uVar13 + 2;
    uVar2 = uVar13 + 3;
    local_29f = (char)(uVar13 / 5);
    local_2a0 = (char)uVar13 - (((byte)((ulonglong)uVar13 * 0xcccccccd >> 0x20) & 0xfc) + local_29f)
    ;
    local_25f = (char)(uVar4 / 5);
    local_260 = (char)uVar4 - (((byte)((ulonglong)uVar4 * 0xcccccccd >> 0x20) & 0xfc) + local_25f);
    local_21f = (char)(uVar14 / 5);
    local_220 = (char)uVar14 - (((byte)((ulonglong)uVar14 * 0xcccccccd >> 0x20) & 0xfc) + local_21f)
    ;
    local_1df = (char)(uVar2 / 5);
    local_1e0 = (char)uVar2 - (((byte)((ulonglong)uVar2 * 0xcccccccd >> 0x20) & 0xfc) + local_1df);
    uVar13 = uVar13 + 4;
    FUN_01759e3c(iVar11,iVar11 + 0x400,iVar11 + 0x800,iVar11 + 0xc00,local_2c0);
    iVar11 = iVar11 + 0x1000;
  } while (uVar13 != 0x1c);
  uVar13 = 0x1c;
LAB_0175f690:
  iVar11 = uVar13 - (((uint)((ulonglong)uVar13 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar13 / 5);
  local_29f = 5;
  local_2a0 = (char)iVar11;
  FUN_01757774(auStack_1b0,0xa8,(int)((ulonglong)uVar13 * 0xcccccccd));
  FUN_01757884(auStack_1b0,local_2c0,0x22);
  FUN_01757d10(local_620,auStack_1b0,0x348);
  iVar12 = 0;
  iVar11 = param_1 + (iVar11 + 0x19) * 0x400;
  pbVar5 = local_620;
  do {
    puVar8 = (undefined1 *)((pbVar5[2] & 0x7f) << 0x10 | (uint)pbVar5[1] << 8 | (uint)*pbVar5);
    if (puVar8 < &LAB_007fe000_1) {
      *(undefined1 **)(iVar11 + iVar12 * 4) = puVar8;
      if (iVar12 == 0xff) break;
      iVar12 = iVar12 + 1;
    }
    pbVar5 = pbVar5 + 3;
    if (pbVar5 == abStack_2d8) {
      do {
        FUN_01757d10(local_620,auStack_1b0,0xa8);
        pbVar5 = local_620;
        do {
          puVar8 = (undefined1 *)((pbVar5[2] & 0x7f) << 0x10 | (uint)pbVar5[1] << 8 | (uint)*pbVar5)
          ;
          if (puVar8 < &LAB_007fe000_1) {
            *(undefined1 **)(iVar11 + iVar12 * 4) = puVar8;
            if (iVar12 == 0xff) goto LAB_0175f73c;
            iVar12 = iVar12 + 1;
          }
          pbVar5 = pbVar5 + 3;
        } while (abStack_578 != pbVar5);
      } while( true );
    }
  } while( true );
LAB_0175f73c:
  FUN_0177aaa0(local_620,0x348);
  bVar15 = uVar13 == 0x1d;
  uVar13 = 0x1d;
  if (bVar15) {
    FUN_0177aaa0(local_2c0,0x100);
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
  goto LAB_0175f690;
}

