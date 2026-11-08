// FUN_012609a0 @ 012609a0 size=1664 calls_out=21 calls_in=3
// strings: Cannot get basepath parent

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_012609a0(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint local_138;
  undefined *local_130;
  uint local_128;
  undefined *local_124;
  uint local_120;
  uint local_118;
  undefined *local_114;
  undefined *local_110;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined *local_9c;
  uint local_98;
  uint local_94;
  undefined *local_90;
  uint local_8c;
  undefined4 local_60;
  int local_40;
  undefined1 *local_3c;
  
  uVar13 = FUN_019aff98(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar2 = (undefined4)((ulonglong)uVar13 >> 0x20);
  iVar8 = (int)uVar13;
  FUN_01264600(&local_98,"Cannot get basepath parent",0x1a);
  if (iVar8 == 0) goto LAB_01260adc;
  FUN_0069603c(&local_98);
  FUN_019adea8(&local_98,iVar8,uVar2);
  if (local_98 != 0) {
    local_114 = (undefined *)local_94;
    local_110 = local_90;
    local_118 = 1;
    FUN_0069603c((uint)&local_118 | 4);
    local_98 = 0x1ff;
    local_94 = CONCAT31(local_94._1_3_,1);
    FUN_019a4dfc(&local_118,&local_98,iVar8,uVar2);
    if (((char)local_118 != '\x04') && ((local_118 & 0xff) != 4)) {
      local_98 = local_118;
      local_94 = (uint)local_114;
LAB_01260adc:
      *param_1 = local_98;
      param_1[1] = local_94;
      return;
    }
    FUN_0125feac(&local_98,param_2);
    if (((char)local_98 != '\x04') && ((local_98 & 0xff) != 4)) goto LAB_01260adc;
  }
  FUN_019adea8(&local_98,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (local_98 == 1) {
    local_114 = (undefined *)local_94;
    local_118 = 1;
    local_110 = local_90;
    FUN_0069603c((uint)&local_118 | 4);
  }
  else if (*(int *)(param_2 + 0x2c) != -1) goto switchD_01260b10_caseD_4;
  FUN_012610cc(param_2);
  iVar8 = *(int *)(param_2 + 0x2c);
  if (iVar8 == -1) {
    local_60 = 0;
  }
  else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x24)) {
    default:
      FUN_019a6040(&local_98,iVar8);
      if (local_98 != 0) {
        *(undefined4 *)(param_2 + 0x40) = 0;
        FUN_0069603c((uint)&local_98 | 4);
        goto switchD_01260b10_caseD_4;
      }
      break;
    case 1:
      uVar1 = FUN_01937230();
      uVar5 = 0;
      puVar9 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
      local_128 = 0;
      do {
        local_110 = (undefined *)0x0;
        local_114 = (undefined *)0x1;
        local_124 = (undefined *)0x1;
        local_118 = 0;
        local_120 = 0;
        do {
          puVar6 = local_110;
          if (puVar9 <= puVar7) {
            local_90 = (undefined *)0x0;
            local_94 = 0x2000;
            local_98 = uVar1;
            local_8c = uVar5;
            FUN_019ba410(&local_a0,iVar8,&local_98);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
            switch(local_a0 & 0xff) {
            case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            default:
              puVar7 = (undefined *)0x0;
              uVar5 = local_8c;
              puVar9 = local_90;
            }
          }
          uVar11 = (int)puVar9 - (int)puVar7;
          puVar10 = puVar7 + uVar1;
          if (uVar11 < 8) {
            if (uVar11 == 0) {
              uVar11 = 0;
              uVar14 = 0;
            }
            else {
              uVar3 = 0;
              do {
                if (puVar10[uVar3] == '\n') {
                  uVar14 = CONCAT44(uVar3,1);
                  goto LAB_01260d00;
                }
                uVar3 = uVar3 + 1;
              } while (uVar11 != uVar3);
              uVar14 = (ulonglong)uVar11 << 0x20;
            }
          }
          else {
            uVar14 = FUN_01307168(10,puVar10,uVar11);
          }
LAB_01260d00:
          uVar3 = (uint)(uVar14 >> 0x20);
          if ((uVar14 & 1) != 0) {
            if (uVar11 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar3,uVar11,&DAT_01d2842c);
            }
            iVar12 = uVar3 + 1;
            if (local_118 - (int)puVar6 <= uVar3) {
              FUN_016092cc(&local_118,puVar6,iVar12,1,1);
              local_124 = local_114;
              puVar6 = local_110;
            }
            FUN_01bed4e2(local_124 + (int)puVar6,puVar10,iVar12);
            puVar7 = puVar7 + iVar12;
            local_110 = (undefined *)((int)puVar6 + iVar12);
            local_120 = iVar12 + local_120;
            if (puVar9 < puVar7) {
              puVar7 = puVar9;
            }
            break;
          }
          if (local_118 - (int)puVar6 < uVar11) {
            FUN_016092cc(&local_118,puVar6,uVar11,1,1);
            local_124 = local_114;
            puVar6 = local_110;
          }
          FUN_01bed4e2(local_124 + (int)puVar6,puVar10,uVar11);
          puVar7 = puVar7 + uVar11;
          local_110 = (undefined *)((int)puVar6 + uVar11);
          if (puVar9 < puVar7) {
            puVar7 = puVar9;
          }
          local_120 = uVar11 + local_120;
        } while (uVar11 != 0);
        puVar6 = local_110;
        local_a8 = CONCAT31(local_a8._1_3_,4);
        local_a4 = local_120;
        FUN_012fbd94(&local_98,local_124,local_110);
        if (local_98 == 0) {
          puVar4 = &local_a8;
LAB_01260e00:
          uVar3 = *puVar4;
          uVar11 = uVar3 & 0xff;
          local_110 = puVar6;
          if (uVar11 != 4) {
            local_138 = puVar4[1];
            goto LAB_01260e7c;
          }
          if (puVar4[1] == 0) {
            uVar11 = 0x80000001;
            goto LAB_01260e88;
          }
          if ((((puVar6 != (undefined *)0x0) && (local_114[(int)puVar6 - 1] == '\n')) &&
              (local_110 = (undefined *)((int)puVar6 - 1), local_110 != (undefined *)0x0)) &&
             (local_114[(int)puVar6 - 2] == '\r')) {
            local_110 = (undefined *)((int)puVar6 - 2);
          }
          local_138 = (uint)local_110;
          local_130 = local_114;
          uVar11 = local_118;
        }
        else {
          puVar6 = (undefined *)0x0;
          puVar4 = &DAT_01d276bc;
          uVar11 = local_a8 & 0xff;
          if (uVar11 == 4) goto LAB_01260e00;
          local_138 = local_a4;
          local_110 = (undefined *)0x0;
          uVar3 = local_a8;
LAB_01260e7c:
          local_130 = (undefined *)(uVar11 | uVar3 & 0xffffff00);
          uVar11 = 0x80000000;
LAB_01260e88:
          FUN_019bb7e0(local_118,local_114);
        }
        if (uVar11 == 0x80000001) goto LAB_01260fbc;
        local_8c = local_138;
        local_98 = local_128;
        local_94 = uVar11;
        local_90 = local_130;
        if (uVar11 == 0x80000000) {
          FUN_0069603c();
        }
        else {
          FUN_019bb7e0(uVar11,local_130);
        }
        local_128 = local_128 + 1;
      } while( true );
    case 2:
      FUN_019a6040(&local_98,iVar8);
      if (local_98 == 1) {
        uVar5 = local_94;
LAB_0126100c:
        uVar2 = FUN_0069263c(uVar5,local_90);
        local_118 = 0;
      }
      else {
        local_90 = &DAT_01d27958;
        if (&DAT_3b9ac9ff < local_3c) {
          uVar5 = 2;
          goto LAB_0126100c;
        }
        FUN_0128f5f0(&local_118,local_40 >> 0x1f,local_40,local_40 >> 0x1f,local_3c);
        FUN_0129066c(&local_98,&local_118);
        uVar2 = FUN_0129220c(&local_98);
        local_9c = local_110;
        local_a0 = (uint)local_114;
      }
      *(uint *)(param_2 + 0x30) = local_118;
      *(uint *)(param_2 + 0x34) = local_a0;
      *(undefined **)(param_2 + 0x38) = local_9c;
      *(undefined4 *)(param_2 + 0x3c) = uVar2;
    case 4:
      goto switchD_01260b10_caseD_4;
    }
  }
  *(undefined4 *)(param_2 + 0x40) = local_60;
switchD_01260b10_caseD_4:
  *(undefined1 *)param_1 = 4;
  return;
LAB_01260fbc:
  thunk_FUN_01be4678(uVar1);
  *(uint *)(param_2 + 0x40) = local_128;
  goto switchD_01260b10_caseD_4;
}

