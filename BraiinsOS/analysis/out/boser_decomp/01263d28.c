// FUN_01263d28 @ 01263d28 size=1856 calls_out=12 calls_in=3
// strings: 

void FUN_01263d28(uint *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_30;
  undefined4 *local_2c;
  
  if (param_4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_2 + 0x30);
    do {
      iVar11 = param_3;
      puVar10 = param_4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x24)) {
      case 0:
        uVar6 = *(uint *)(param_2 + 0x40);
        uVar12 = *(uint *)(param_2 + 0x28);
        uVar13 = uVar6 + (int)param_4;
        while (uVar12 < uVar13) {
          puVar9 = (undefined4 *)(uVar12 - uVar6);
          if (uVar12 < uVar6) {
            puVar9 = (undefined4 *)0x0;
          }
          if (*(int *)(param_2 + 0x2c) != -1) {
            if (puVar10 < puVar9) {
              puVar7 = &DAT_01c251ec;
LAB_01264428:
              puVar3 = (undefined4 *)0x0;
              goto LAB_01264430;
            }
            FUN_0126555c(&local_30,*(int *)(param_2 + 0x2c),iVar11,puVar9);
            if (((char)local_30 != '\x04') && (uVar6 = local_30 & 0xff, uVar6 != 4))
            goto LAB_01264370;
          }
          FUN_01261e28(&local_30,param_2);
          if (((char)local_30 != '\x04') && (uVar6 = local_30 & 0xff, uVar6 != 4))
          goto LAB_01264370;
          if (puVar10 < puVar9) {
            puVar7 = &UNK_01c251fc;
            puVar3 = puVar9;
            puVar9 = puVar10;
LAB_01264414:
            puVar10 = puVar9;
LAB_01264430:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(puVar3,puVar9,puVar10,puVar7);
          }
          uVar6 = *(uint *)(param_2 + 0x40);
          puVar10 = (undefined4 *)((int)puVar10 - (int)puVar9);
          iVar11 = iVar11 + (int)puVar9;
          uVar13 = uVar6 + (int)puVar10;
        }
        iVar5 = *(int *)(param_2 + 0x2c);
        *(uint *)(param_2 + 0x40) = uVar13;
LAB_01264118:
        if (iVar5 != -1) {
LAB_0126412c:
          FUN_0126555c(&local_30,iVar5,iVar11,puVar10);
          if (((char)local_30 != '\x04') && (uVar6 = local_30 & 0xff, uVar6 != 4))
          goto LAB_01264370;
        }
        break;
      case 1:
        uVar13 = *(uint *)(param_2 + 0x28);
        do {
          do {
            puVar9 = (undefined4 *)0x0;
            do {
              if (puVar10 == puVar9) {
                iVar5 = *(int *)(param_2 + 0x2c);
                goto LAB_01264118;
              }
              pcVar1 = (char *)(iVar11 + (int)puVar9);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            } while (*pcVar1 != '\n');
            if (*(int *)(param_2 + 0x2c) != -1) {
              if (puVar10 < puVar9) {
                puVar7 = &DAT_01c2520c;
                goto LAB_01264428;
              }
              FUN_0126555c(&local_30,*(int *)(param_2 + 0x2c),iVar11,puVar9);
              if (((char)local_30 != '\x04') && (uVar6 = local_30 & 0xff, uVar6 != 4))
              goto LAB_01264370;
            }
            uVar6 = *(int *)(param_2 + 0x40) + 1;
            *(uint *)(param_2 + 0x40) = uVar6;
            if (puVar10 < puVar9) {
              puVar7 = &DAT_01c2521c;
              puVar3 = puVar9;
              puVar9 = puVar10;
              goto LAB_01264414;
            }
            iVar11 = iVar11 + (int)puVar9;
            puVar10 = (undefined4 *)((int)puVar10 - (int)puVar9);
          } while (uVar6 < uVar13);
          FUN_01261e28(&local_30,param_2);
        } while (((char)local_30 == '\x04') || (uVar6 = local_30 & 0xff, uVar6 == 4));
LAB_01264370:
        puVar10 = local_2c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar6) {
        case 0:
          if (local_2c != (undefined4 *)0x4) goto LAB_012643fc;
          break;
        case 1:
          if ((local_30 & 0xff00) != 0x2300) goto LAB_012643fc;
          break;
        default:
          if (*(char *)(local_2c + 2) != '#') goto LAB_012643fc;
          break;
        case 4:
          goto switchD_01264380_caseD_4;
        }
        FUN_0069603c(local_58);
        goto LAB_01264360;
      case 2:
        uVar2 = *(undefined1 *)(param_2 + 0x25);
        FUN_0128e808(&local_40);
        FUN_0129066c(&local_30,&local_40);
        uVar4 = FUN_0129220c(&local_30);
        local_50 = local_40;
        uStack_4c = uStack_3c;
        uStack_48 = uStack_38;
        local_44 = uVar4;
        if (*(int *)(param_2 + 0x30) != 0) {
          uVar8 = *(undefined4 *)(param_2 + 0x3c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar2) {
          case 0:
            FUN_0128fca4(&local_30,&local_50,uVar4);
            puVar10 = local_2c;
            FUN_0128fca4(&local_30,puVar3,uVar8);
            if ((uint)puVar10 / 0xe10 == (uint)local_2c / 0xe10) {
              FUN_0128fca4(&local_30,&local_50,uVar4);
              uVar12 = local_30;
              uVar6 = (local_30 & 0x1fff) >> 3;
              if (0x2dc < uVar6) goto LAB_01264480;
              FUN_0128fca4(&local_30,puVar3,uVar8);
              uVar13 = (local_30 & 0x1fff) >> 3;
              if (0x2dc < uVar13) {
LAB_01264494:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar13,0x2dd,&DAT_01d2a928);
              }
              if ((((uVar12 >> 3) + (uint)(byte)""[uVar6] ^ (local_30 >> 3) + (uint)(byte)""[uVar13]
                   ) & 0x3e) == 0) {
                FUN_0128fca4(&local_30,&local_50,uVar4);
                uVar6 = (local_30 & 0x1fff) >> 3;
                if (0x2dc < uVar6) goto LAB_01264480;
                FUN_0128fca4(&local_30,puVar3,uVar8);
                uVar13 = (local_30 & 0x1fff) >> 3;
                if (0x2dc < uVar13) goto LAB_01264494;
                uVar6 = uVar6 + (byte)""[uVar6] ^ uVar13 + (byte)""[uVar13];
                goto joined_r0x012641b4;
              }
            }
            break;
          case 1:
            FUN_0128ec84(&local_30,&local_50,uVar4);
            uVar6 = local_30;
            if ((local_30 == 0) || (FUN_0128ec84(&local_30,puVar3,uVar8), local_30 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c(&DAT_00529c62,0x2b,&DAT_01d2a938);
            }
            if ((int)uVar6 <= (int)local_30) goto LAB_012642f8;
            break;
          case 2:
            FUN_0128fca4(&local_30,&local_50,uVar4);
            uVar6 = FUN_0128e728((int)local_30 >> 0xd,(local_30 & 0x1fff) >> 4,local_30 & 0xf);
            FUN_0128fca4(&local_30,puVar3,uVar8);
            uVar13 = FUN_0128e728((int)local_30 >> 0xd,(local_30 & 0x1fff) >> 4,local_30 & 0xf);
            if (((uVar13 ^ uVar6) & 0x3f0) == 0) goto switchD_01263e9c_caseD_4;
            break;
          case 3:
            FUN_0128fca4(&local_30,&local_50,uVar4);
            uVar6 = (local_30 & 0x1fff) >> 3;
            if (0x2dc < uVar6) {
LAB_01264480:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar6,0x2dd,&DAT_01d2a928);
            }
            FUN_0128fca4(&local_30,puVar3,uVar8);
            uVar13 = (local_30 & 0x1fff) >> 3;
            if (0x2dc < uVar13) goto LAB_01264494;
            uVar6 = uVar13 + (byte)""[uVar13] ^ uVar6 + (byte)""[uVar6];
joined_r0x012641b4:
            if (uVar6 < 0x40) {
              FUN_0128fca4(&local_30,&local_50,uVar4);
              uVar6 = local_30;
              FUN_0128fca4(&local_30,puVar3,uVar8);
              if ((local_30 ^ uVar6) < 0x2000) goto LAB_012642f8;
            }
            break;
          case 4:
switchD_01263e9c_caseD_4:
            FUN_0128fca4(&local_30,&local_50,uVar4);
            uVar6 = local_30;
            FUN_0128fca4(&local_30,puVar3,uVar8);
            if ((int)uVar6 >> 0xd <= (int)local_30 >> 0xd) goto LAB_012642f8;
          }
          FUN_01261e28(&local_30,param_2);
          if (((char)local_30 != '\x04') && (uVar6 = local_30 & 0xff, uVar6 != 4))
          goto LAB_01264370;
        }
LAB_012642f8:
        if (*(int *)(param_2 + 0x2c) != -1) {
          FUN_0126555c(&local_30,*(int *)(param_2 + 0x2c),param_3,param_4);
          if (((char)local_30 != '\x04') && (uVar6 = local_30 & 0xff, uVar6 != 4))
          goto LAB_01264370;
          *puVar3 = local_50;
          *(undefined4 *)(param_2 + 0x34) = uStack_4c;
          *(undefined4 *)(param_2 + 0x38) = uStack_48;
          *(undefined4 *)(param_2 + 0x3c) = local_44;
        }
        break;
      case 3:
        if (*(uint *)(param_2 + 0x28) < *(uint *)(param_2 + 0x40)) {
          FUN_01261e28(&local_30,param_2);
          if (((char)local_30 != '\x04') && (uVar6 = local_30 & 0xff, uVar6 != 4))
          goto LAB_01264370;
        }
        if (*(int *)(param_2 + 0x2c) != -1) {
          FUN_0126555c(&local_30,*(int *)(param_2 + 0x2c),param_3,param_4);
          if (((char)local_30 != '\x04') && (uVar6 = local_30 & 0xff, uVar6 != 4))
          goto LAB_01264370;
        }
        *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + (int)param_4;
        break;
      case 4:
        iVar5 = *(int *)(param_2 + 0x2c);
        if (iVar5 != -1) goto LAB_0126412c;
      }
      puVar10 = param_4;
switchD_01264380_caseD_4:
      if (puVar10 == (undefined4 *)0x0) {
        local_2c = &DAT_01d2e7b8;
        local_30 = 2;
LAB_012643fc:
        *param_1 = local_30;
        param_1[1] = (uint)local_2c;
        return;
      }
      if (param_4 < puVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(puVar10,param_4,param_4,&DAT_01d2e7d0);
      }
      param_3 = param_3 + (int)puVar10;
      param_4 = (undefined4 *)((int)param_4 - (int)puVar10);
LAB_01264360:
    } while (param_4 != (undefined4 *)0x0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

