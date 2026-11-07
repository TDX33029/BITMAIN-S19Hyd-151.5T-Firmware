// FUN_01a5cd30 @ 01a5cd30 size=568 calls_out=6 calls_in=2
// strings: 2DIGIT should match u8

void FUN_01a5cd30(uint *param_1,int param_2)

{
  bool bVar1;
  byte *pbVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_68 [24];
  uint local_50;
  byte *local_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint *local_2c;
  undefined *local_28;
  
  uVar11 = *(undefined4 *)(param_2 + 8);
  uVar12 = *(undefined4 *)(param_2 + 0xc);
  FUN_01a44f0c(&local_50,param_2,2,2);
  if (local_50 == 3) {
    if (local_48 == 1) {
      bVar7 = *local_4c;
      bVar6 = 1;
      if ((bVar7 == 0x2b) || (bVar7 == 0x2d)) goto LAB_01a5cf20;
    }
    else {
      if (local_48 == 0) {
        bVar6 = 0;
        goto LAB_01a5cf20;
      }
      bVar7 = *local_4c;
    }
    uVar5 = local_48;
    pbVar2 = local_4c;
    if (bVar7 == 0x2b) {
      pbVar2 = local_4c + 1;
      uVar5 = local_48 - 1;
    }
    if (2 < uVar5) {
      uVar10 = 0;
      do {
        if (uVar5 == 0) goto LAB_01a5ce0c;
        uVar10 = (uVar10 & 0xff) * 4 + (uVar10 & 0xff);
        if (uVar10 >> 7 != 0) {
          bVar6 = 1;
          if (*pbVar2 - 0x30 < 10) {
            bVar6 = 2;
          }
          goto LAB_01a5cf20;
        }
        uVar8 = *pbVar2 - 0x30;
        if (9 < uVar8) goto LAB_01a5cf5c;
        uVar5 = uVar5 - 1;
        uVar10 = (uVar10 * 2 & 0xff) + (uVar8 & 0xff);
        pbVar2 = pbVar2 + 1;
      } while ((uVar10 & 0xffffff00) == 0);
      bVar6 = 2;
LAB_01a5cf20:
      local_50 = (uint)bVar6;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("2DIGIT should match u8",0x16,&local_50,&DAT_01d2c500,&DAT_01d2c558);
    }
    if (uVar5 == 0) {
      uVar5 = 3;
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      bVar4 = uVar5 == 1;
      do {
        bVar7 = *pbVar2;
        if (9 < bVar7 - 0x30) goto LAB_01a5cf5c;
        pbVar2 = pbVar2 + 1;
        bVar1 = !bVar4;
        bVar4 = true;
        uVar10 = (bVar7 - 0x30) + uVar10 * 10;
      } while (bVar1);
LAB_01a5ce0c:
      uVar9 = (undefined1)uVar10;
      uVar5 = 3;
      if (0x3b < (uVar10 & 0xff)) {
        local_50 = 0x80000001;
        local_2c = (uint *)0x0;
        local_30 = 0;
        local_38 = 0;
        *(undefined4 *)(param_2 + 8) = uVar11;
        *(undefined4 *)(param_2 + 0xc) = uVar12;
        local_34 = 4;
        puVar3 = (uint *)thunk_FUN_01be5118(0x18);
        if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x18);
        }
        *puVar3 = local_50;
        puVar3[1] = (uint)local_4c;
        puVar3[2] = local_48;
        puVar3[3] = local_44;
        puVar3[4] = uStack_40;
        puVar3[5] = uStack_3c;
        uVar9 = 0;
        FUN_012d40d0(0);
        local_28 = &DAT_01d2c4d4;
        local_2c = puVar3;
        FUN_01bed4e2(auStack_68,(uint)&local_38 | 1,0x13);
        uVar5 = 1;
      }
    }
    *param_1 = uVar5;
    *(undefined1 *)(param_1 + 1) = uVar9;
    FUN_01bed4e2((int)param_1 + 5,auStack_68,0x13);
  }
  else {
    param_1[3] = local_44;
    param_1[4] = uStack_40;
    param_1[5] = uStack_3c;
    *param_1 = local_50;
    param_1[1] = (uint)local_4c;
    param_1[2] = local_48;
  }
  return;
LAB_01a5cf5c:
  bVar6 = 1;
  goto LAB_01a5cf20;
}

