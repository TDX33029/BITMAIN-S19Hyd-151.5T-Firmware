// FUN_0117dc0c @ 0117dc0c size=840 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0117dc0c(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar1 = 1;
  if (*param_2 == '\x05') {
    iStack_40 = *(int *)(param_2 + 4);
    uStack_3c = *(undefined4 *)(param_2 + 8);
    iVar9 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    iVar8 = *(int *)(param_1 + 0xc);
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (iStack_40 == 0) {
      local_28 = 0;
    }
    local_44 = 0;
    local_48 = (uint)(iStack_40 != 0);
    local_34 = 0;
    local_38 = local_48;
    local_30 = iStack_40;
    local_2c = uStack_3c;
    if (iVar2 != 0) {
LAB_0117dc80:
      do {
        uVar13 = FUN_00f45584(&local_48);
        uVar1 = (undefined4)((ulonglong)uVar13 >> 0x20);
        iVar4 = (int)uVar13;
        if (iVar4 == 0) {
          return 1;
        }
        uVar10 = *(undefined4 *)(iVar4 + 4);
        iVar12 = *(int *)(iVar4 + 8);
        iVar4 = iVar9;
        iVar5 = iVar2 << 5;
        do {
          if ((*(int *)(iVar4 + 8) == iVar12) &&
             (iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(iVar4 + 4),uVar10,iVar12), iVar3 == 0)) {
            iVar4 = *(int *)(iVar4 + 0xc);
            uVar6 = 1;
            if ((int)*(uint *)(iVar4 + 8) < 0) {
              uVar6 = *(uint *)(iVar4 + 8) ^ 0x80000000;
            }
            if (uVar6 == 0) {
              iVar4 = *(int *)(iVar4 + 0xc);
              goto joined_r0x0117ddd8;
            }
            if (uVar6 != 1) {
              puVar11 = *(undefined4 **)(iVar4 + 0x10);
              iVar4 = *(int *)(iVar4 + 0x14) << 5;
              goto LAB_0117dde8;
            }
            puVar11 = *(undefined4 **)(iVar4 + 0xc);
            iVar4 = *(int *)(iVar4 + 0x10);
            if (iVar4 == 1) goto LAB_0117dd68;
            if (iVar4 == 0) goto LAB_0117dc80;
            puVar7 = puVar11 + iVar4 * 8;
            goto LAB_0117dd10;
          }
          iVar4 = iVar4 + 0x20;
          iVar5 = iVar5 + -0x20;
        } while (iVar5 != 0);
        uVar6 = 1;
        if ((int)*(uint *)(iVar8 + 8) < 0) {
          uVar6 = *(uint *)(iVar8 + 8) ^ 0x80000000;
        }
        if (uVar6 != 0) {
          if (uVar6 == 1) {
            puVar11 = *(undefined4 **)(iVar8 + 0xc);
            iVar4 = *(int *)(iVar8 + 0x10);
            if (iVar4 == 1) {
LAB_0117dd68:
              iVar4 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar1,param_3);
              if (iVar4 == 0) break;
            }
            else {
              puVar7 = puVar11 + iVar4 * 8;
              if (iVar4 != 0) {
                do {
                  iVar4 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar1,param_3);
                  if (iVar4 == 0) goto LAB_0117df3c;
                  puVar11 = puVar11 + 8;
                } while (puVar11 != puVar7);
              }
            }
          }
          else {
            puVar11 = *(undefined4 **)(iVar8 + 0x10);
            iVar4 = *(int *)(iVar8 + 0x14) << 5;
            while (iVar4 != 0) {
              iVar5 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar1,param_3);
              iVar4 = iVar4 + -0x20;
              puVar11 = puVar11 + 8;
              if (iVar5 == 0) goto LAB_0117df3c;
            }
          }
          goto LAB_0117dc80;
        }
        iVar4 = *(int *)(iVar8 + 0xc);
joined_r0x0117ddd8:
      } while (iVar4 == 0);
      goto LAB_0117df3c;
    }
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar13 = FUN_00f45584(&local_48);
            uVar1 = (undefined4)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 == 0) {
              return 1;
            }
            uVar6 = 1;
            if ((int)*(uint *)(iVar8 + 8) < 0) {
              uVar6 = *(uint *)(iVar8 + 8) ^ 0x80000000;
            }
            if (uVar6 != 0) break;
            if (*(int *)(iVar8 + 0xc) != 0) goto LAB_0117df3c;
          }
          if (uVar6 == 1) break;
          puVar11 = *(undefined4 **)(iVar8 + 0x10);
          iVar2 = *(int *)(iVar8 + 0x14) << 5;
          while (iVar2 != 0) {
            iVar9 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar1,param_3);
            iVar2 = iVar2 + -0x20;
            puVar11 = puVar11 + 8;
            if (iVar9 == 0) goto LAB_0117df3c;
          }
        }
        iVar2 = *(int *)(iVar8 + 0x10);
        puVar11 = *(undefined4 **)(iVar8 + 0xc);
        if (iVar2 == 1) break;
        puVar7 = puVar11 + iVar2 * 8;
        if (iVar2 != 0) {
          do {
            iVar2 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar1,param_3);
            if (iVar2 == 0) goto LAB_0117df3c;
            puVar11 = puVar11 + 8;
          } while (puVar11 != puVar7);
        }
      }
      iVar2 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar1,param_3);
    } while (iVar2 != 0);
LAB_0117df3c:
    uVar1 = 0;
  }
  return uVar1;
LAB_0117dde8:
  if (iVar4 == 0) goto LAB_0117dc80;
  iVar5 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar1,param_3);
  iVar4 = iVar4 + -0x20;
  puVar11 = puVar11 + 8;
  if (iVar5 == 0) goto LAB_0117df3c;
  goto LAB_0117dde8;
  while (puVar11 = puVar11 + 8, puVar11 != puVar7) {
LAB_0117dd10:
    iVar4 = (**(code **)(puVar11[1] + 0x10))(*puVar11,uVar1,param_3);
    if (iVar4 == 0) goto LAB_0117df3c;
  }
  goto LAB_0117dc80;
}

