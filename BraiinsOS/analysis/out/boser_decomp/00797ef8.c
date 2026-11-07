// FUN_00797ef8 @ 00797ef8 size=664 calls_out=5 calls_in=1
// strings: 

void FUN_00797ef8(undefined1 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined4 local_64;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined2 local_30;
  char local_29;
  undefined4 local_28;
  
  uVar9 = 0;
  if ((*(byte *)(param_2 + 0x25) & 1) == 0) {
    uVar3 = *(uint *)(param_2 + 0x20);
    uVar4 = (uint)*(byte *)(param_2 + 0x24);
    iVar12 = *(int *)(param_2 + 4);
    uVar11 = *(uint *)(param_2 + 8);
    uVar10 = *(uint *)(param_2 + 0xc);
    uVar13 = *(uint *)(param_2 + 0x10);
    uVar8 = (uint)*(byte *)(param_2 + 0x18);
    do {
      if ((uVar13 <= uVar11) && (uVar10 <= uVar13)) {
        cVar1 = *(char *)(param_2 + 0x14 + uVar8 + -1);
        do {
          uVar7 = uVar13 - uVar10;
          if (uVar7 < 8) {
            uVar6 = 0;
            if (uVar7 == 0) {
              uVar14 = 0;
            }
            else {
              do {
                if (*(char *)(iVar12 + uVar10 + uVar6) == cVar1) {
                  uVar14 = CONCAT44(uVar6,1);
                  goto LAB_00797fc0;
                }
                uVar6 = uVar6 + 1;
              } while (uVar7 != uVar6);
              uVar14 = (ulonglong)uVar7 << 0x20;
            }
          }
          else {
            uVar14 = FUN_01307168(cVar1,iVar12 + uVar10);
          }
LAB_00797fc0:
          if ((uVar14 & 1) == 0) {
            *(uint *)(param_2 + 0xc) = uVar13;
            uVar10 = uVar13;
            break;
          }
          uVar10 = uVar10 + (int)(uVar14 >> 0x20) + 1;
          *(uint *)(param_2 + 0xc) = uVar10;
          if ((uVar8 <= uVar10) && (uVar10 <= uVar11)) {
            if (4 < uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar8,4,&DAT_01d2fe40);
            }
            iVar5 = thunk_FUN_01bed842(iVar12 + (uVar10 - uVar8),param_2 + 0x14,uVar8);
            if (iVar5 == 0) {
              uVar7 = *(uint *)(param_2 + 0x1c);
              bVar2 = false;
              *(uint *)(param_2 + 0x1c) = uVar10;
              iVar5 = uVar10 - uVar7;
              goto LAB_00798048;
            }
          }
        } while (uVar10 <= uVar13);
      }
      *(undefined1 *)(param_2 + 0x25) = 1;
      uVar7 = *(uint *)(param_2 + 0x1c);
      uVar6 = uVar4;
      if (uVar4 == 0) {
        uVar6 = uVar3;
      }
      if (uVar4 == 0 && uVar6 == uVar7) {
        uVar9 = 0;
        break;
      }
      bVar2 = true;
      iVar5 = uVar3 - uVar7;
LAB_00798048:
      local_44 = iVar12 + uVar7;
      local_48 = iVar5;
      if ((iVar5 != 0) && (*(char *)(local_44 + iVar5 + -1) == '\n')) {
        local_48 = iVar5 + -1;
        if ((local_48 != 0) && (*(char *)(local_44 + iVar5 + -2) == '\r')) {
          local_48 = iVar5 + -2;
        }
      }
      if (local_44 == 0) break;
      local_38 = local_44 + local_48;
      local_30 = 1;
      local_34 = 0;
      local_4c = 0;
      local_40 = local_48;
      local_3c = local_44;
      uVar15 = FUN_013182f8(&local_4c);
      if ((((int)uVar15 != 0) && ((int)((ulonglong)uVar15 >> 0x20) == 10)) &&
         (iVar5 = thunk_FUN_01bed842((int)uVar15,&DAT_0051d19f,10), iVar5 == 0)) {
        uVar15 = FUN_013182f8(&local_4c);
        if ((int)uVar15 != 0) {
          FUN_01304e7c(&local_29,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          if (local_29 == '\0') {
            local_64 = local_28;
          }
          if (local_29 != '\x01') {
            uVar9 = 1;
            *(undefined4 *)(param_1 + 1) = local_64;
            break;
          }
        }
      }
    } while (!bVar2);
  }
  *param_1 = uVar9;
  return;
}

