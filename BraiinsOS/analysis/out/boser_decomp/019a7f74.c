// FUN_019a7f74 @ 019a7f74 size=1168 calls_out=9 calls_in=3
// strings: 

void FUN_019a7f74(uint *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  ulonglong uVar13;
  uint local_30;
  uint local_2c;
  undefined1 local_28 [4];
  
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_01306fc8(&DAT_01d280e0);
LAB_019a8368:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d28214);
  }
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  uVar13 = FUN_01307268(10,param_3,param_4);
  piVar12 = (int *)(param_2 + 0x14);
  if ((uVar13 & 1) == 0) {
    uVar10 = *(uint *)(param_2 + 0x1c);
    if (uVar10 == 0) {
      uVar10 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x18);
      if (*(char *)(iVar4 + uVar10 + -1) == '\n') {
        uVar5 = 0;
        uVar6 = 0;
        do {
          iVar7 = uVar10 - uVar6;
          iVar1 = FUN_01bf053e(1,iVar4 + uVar6,iVar7);
          if (iVar1 == -1) {
            puVar2 = (undefined4 *)FUN_01be3244();
            puVar3 = (undefined *)*puVar2;
            *(undefined1 *)(param_2 + 0x20) = 0;
            if (puVar3 != (undefined *)0x4) {
              iVar1 = iVar7;
              if (puVar3 == (undefined *)0x9) goto LAB_019a80e0;
              goto LAB_019a82d8;
            }
          }
          else {
            *(undefined1 *)(param_2 + 0x20) = 0;
LAB_019a80e0:
            if (iVar1 == 0) {
              uVar5 = 2;
              puVar3 = &DAT_01d285ac;
LAB_019a82d8:
              if (uVar6 != 0) {
                FUN_01bed864(iVar4,iVar4 + uVar6,iVar7);
                *(int *)(param_2 + 0x1c) = iVar7;
              }
              *param_1 = uVar5;
              param_1[1] = (uint)puVar3;
              goto LAB_019a82b8;
            }
            uVar6 = iVar1 + uVar6;
          }
        } while (uVar6 < uVar10);
        if (uVar10 < uVar6) {
          uVar5 = 0;
          puVar3 = &DAT_01d28024;
          goto LAB_019a834c;
        }
        uVar10 = 0;
        *(undefined4 *)(param_2 + 0x1c) = 0;
      }
    }
    if (param_4 < *piVar12 - uVar10) {
      FUN_01bed4e2(*(int *)(param_2 + 0x18) + uVar10,param_3,param_4);
      *(uint *)(param_2 + 0x1c) = uVar10 + param_4;
      *(undefined1 *)param_1 = 4;
      goto LAB_019a82b8;
    }
  }
  else {
    uVar8 = (int)(uVar13 >> 0x20) + 1;
    if (param_4 < uVar8) goto LAB_019a8368;
    iVar4 = *(int *)(param_2 + 0x1c);
    if (iVar4 == 0) {
      if (uVar8 != 0) {
        puVar11 = &DAT_01d2e7c8;
        uVar6 = uVar8;
        iVar4 = param_3;
        do {
          while (uVar5 = FUN_01bf053e(1,iVar4,uVar6), uVar5 == 0xffffffff) {
            puVar2 = (undefined4 *)FUN_01be3244();
            puVar2 = (undefined4 *)*puVar2;
            local_28[0] = 0;
            if (puVar2 != (undefined4 *)0x4) {
              puVar11 = (uint *)local_28;
LAB_019a8310:
              uVar10 = *puVar11 & 0xff;
              if ((uVar10 != 4) && (puVar2 != (undefined4 *)0x9 || uVar10 != 0)) {
                *param_1 = *puVar11;
                param_1[1] = (uint)puVar2;
                goto LAB_019a82b8;
              }
              goto LAB_019a81dc;
            }
            if (uVar6 == 0) goto LAB_019a81dc;
          }
          local_28[0] = 4;
          if (uVar5 == 0) {
            puVar2 = &DAT_01d2e7b8;
            goto LAB_019a8310;
          }
          if (uVar6 < uVar5) {
            puVar3 = &DAT_01d27754;
            uVar10 = uVar6;
            goto LAB_019a834c;
          }
          iVar4 = iVar4 + uVar5;
          uVar6 = uVar6 - uVar5;
        } while (uVar6 != 0);
      }
    }
    else {
      if (uVar8 < (uint)(*piVar12 - iVar4)) {
        FUN_01bed4e2(*(int *)(param_2 + 0x18) + iVar4,param_3,uVar8);
        uVar10 = iVar4 + uVar8;
        *(uint *)(param_2 + 0x1c) = uVar10;
      }
      else {
        FUN_019a85d0(&local_30,piVar12,param_3,uVar8);
        if ((char)local_30 != '\x04') {
          *param_1 = local_30;
          param_1[1] = local_2c;
          goto LAB_019a82b8;
        }
        uVar10 = *(uint *)(param_2 + 0x1c);
        if (uVar10 == 0) goto LAB_019a81dc;
      }
      uVar6 = 0;
      iVar4 = *(int *)(param_2 + 0x18);
      uVar5 = 0;
      do {
        iVar9 = iVar4 + uVar6;
        iVar7 = uVar10 - uVar6;
        iVar1 = FUN_01bf053e(1,iVar9,iVar7);
        if (iVar1 == -1) {
          puVar2 = (undefined4 *)FUN_01be3244();
          puVar3 = (undefined *)*puVar2;
          *(undefined1 *)(param_2 + 0x20) = 0;
          if (puVar3 != (undefined *)0x4) {
            iVar1 = iVar7;
            if (puVar3 == (undefined *)0x9) goto LAB_019a8088;
            goto LAB_019a8238;
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x20) = 0;
LAB_019a8088:
          if (iVar1 == 0) {
            uVar5 = 2;
            puVar3 = &DAT_01d285ac;
LAB_019a8238:
            if (uVar6 != 0) {
              FUN_01bed864(iVar4,iVar9,iVar7);
              *(int *)(param_2 + 0x1c) = iVar7;
            }
            *param_1 = uVar5;
            param_1[1] = (uint)puVar3;
            goto LAB_019a82b8;
          }
          uVar6 = iVar1 + uVar6;
        }
      } while (uVar6 < uVar10);
      if (uVar10 < uVar6) {
        uVar5 = 0;
        puVar3 = &DAT_01d28024;
LAB_019a834c:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar5,uVar6,uVar10,puVar3);
      }
      *(undefined4 *)(param_2 + 0x1c) = 0;
    }
LAB_019a81dc:
    param_4 = param_4 - uVar8;
    iVar4 = *(int *)(param_2 + 0x1c);
    param_3 = param_3 + uVar8;
    if (param_4 < (uint)(*(int *)(param_2 + 0x14) - iVar4)) {
      FUN_01bed4e2(*(int *)(param_2 + 0x18) + iVar4,param_3,param_4);
      *(uint *)(param_2 + 0x1c) = iVar4 + param_4;
      *(undefined1 *)param_1 = 4;
      goto LAB_019a82b8;
    }
  }
  FUN_019a85d0(param_1,piVar12,param_3,param_4);
LAB_019a82b8:
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  return;
}

