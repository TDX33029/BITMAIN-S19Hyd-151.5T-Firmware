// FUN_014f8f38 @ 014f8f38 size=780 calls_out=4 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_014f8f38(int *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    iVar13 = 0;
    piVar2 = param_1;
    do {
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      if ((uVar7 < uVar6) &&
         (piVar2 = (int *)(uint)*(byte *)(iVar5 + uVar7), piVar2 == (int *)&DAT_00000045)) {
        param_1[2] = uVar7 + 1;
        return 0;
      }
      if (iVar13 != 0) {
        piVar2 = (int *)param_1[4];
      }
      if (iVar13 != 0 && piVar2 != (int *)0x0) {
        iVar5 = FUN_00faace8(piVar2,&DAT_0041950f,2);
        if (iVar5 != 0) {
          return 1;
        }
        iVar5 = *param_1;
        if (iVar5 != 0) {
          uVar6 = param_1[1];
          uVar7 = param_1[2];
          if (uVar7 < uVar6) goto LAB_014f8f8c;
          goto LAB_014f90cc;
        }
        if (param_1[4] != 0) {
          iVar5 = FUN_00faace8(param_1[4],"?",1);
          goto LAB_014f913c;
        }
      }
      else {
        if (uVar7 < uVar6) {
LAB_014f8f8c:
          if (*(char *)(iVar5 + uVar7) == 's') {
            uVar3 = uVar7 + 1;
            param_1[2] = uVar3;
            if ((uVar3 < uVar6) && (*(char *)(iVar5 + uVar3) == '_')) {
              param_1[2] = uVar7 + 2;
            }
            else {
              uVar7 = 0;
              uVar10 = 0;
              while( true ) {
                if (uVar6 == uVar3) goto LAB_014f9164;
                cVar1 = *(char *)(iVar5 + uVar3);
                if (cVar1 == '_') break;
                bVar9 = cVar1 - 0x30;
                if (9 < (byte)(cVar1 - 0x30U)) {
                  if ((byte)(cVar1 + 0x9fU) < 0x1a) {
                    bVar9 = cVar1 + 0xa9;
                  }
                  else {
                    if (0x19 < (byte)(cVar1 + 0xbfU)) goto LAB_014f9164;
                    bVar9 = cVar1 - 0x1d;
                  }
                }
                uVar8 = (uint)((ulonglong)uVar7 * 0x3e);
                uVar7 = (uint)((ulonglong)uVar7 * 0x3e >> 0x20);
                uVar3 = uVar3 + 1;
                param_1[2] = uVar3;
                uVar11 = (uint)((ulonglong)uVar10 * 0x3e);
                uVar12 = uVar7 + uVar11;
                if ((int)((ulonglong)uVar10 * 0x3e >> 0x20) != 0 || CARRY4(uVar7,uVar11))
                goto LAB_014f9164;
                uVar11 = (uint)bVar9;
                uVar7 = uVar8 + uVar11;
                uVar10 = uVar12 + CARRY4(uVar8,uVar11);
                if (CARRY4(uVar12,(uint)CARRY4(uVar8,uVar11))) goto LAB_014f9164;
              }
              param_1[2] = uVar3 + 1;
              if (uVar10 == 0xffffffff && (uint)(uVar7 < 0xfffffffe) <= -uVar10 - 1) {
LAB_014f9164:
                if ((param_1[4] == 0) ||
                   (iVar5 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar5 == 0)) {
                  *(undefined1 *)(param_1 + 1) = 0;
                  *param_1 = 0;
                  return 0;
                }
                return 1;
              }
            }
          }
        }
LAB_014f90cc:
        FUN_014f67cc(&local_48,param_1);
        if (local_48 == 0) {
          iVar5 = param_1[4];
          if ((char)local_44 == '\0') {
            if (iVar5 == 0) goto LAB_014f922c;
            iVar5 = FUN_00faace8(iVar5,&DAT_00564580,0x10);
          }
          else {
            if (iVar5 == 0) goto LAB_014f922c;
            iVar5 = FUN_00faace8(iVar5,"{recursion limit reached}",0x19);
          }
          if (iVar5 != 0) {
            return 1;
          }
LAB_014f922c:
          *(char *)(param_1 + 1) = (char)local_44;
          *param_1 = 0;
          return 0;
        }
        iVar5 = param_1[4];
        local_38 = local_48;
        uStack_34 = local_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        if (iVar5 != 0) {
          iVar4 = FUN_014f6a3c(&local_38,iVar5);
          if (iVar4 != 0) {
            return 1;
          }
          iVar5 = FUN_00faace8(iVar5,&DAT_00414a7c,2);
          if (iVar5 != 0) {
            return 1;
          }
        }
        iVar5 = FUN_014f7968(param_1,1);
LAB_014f913c:
        if (iVar5 != 0) {
          return 1;
        }
      }
      piVar2 = (int *)0x0;
      iVar5 = *param_1;
      iVar13 = iVar13 + 1;
    } while (iVar5 != 0);
  }
  return 0;
}

