// FUN_00ec1930 @ 00ec1930 size=2352 calls_out=13 calls_in=1
// strings: a UUID string | parameters | assertion failed: !self.only_contains_attribute_certs | a UUID string | a UUID string | ininciniinkapplication/inkml+xmlinkmlinlinsapplication/x-internet-signup

/* WARNING: Removing unreachable block (ram,0x00ec2258) */
/* WARNING: Removing unreachable block (ram,0x00ec2228) */
/* WARNING: Removing unreachable block (ram,0x00ec1b28) */
/* WARNING: Removing unreachable block (ram,0x00ec21e0) */

int FUN_00ec1930(char *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined4 local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 == '\x01') {
LAB_00ec2210:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  piVar2 = *(int **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    uVar7 = 1;
    pcVar8 = ",";
    iVar9 = *piVar2;
    do {
      uVar13 = *(uint *)(iVar9 + 4);
      uVar5 = uVar13 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar9,pcVar8,uVar5);
      if (uVar13 == 0x7fffffff) goto LAB_00ec2148;
      pcVar8 = pcVar8 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
  }
  param_1[1] = '\x02';
  FUN_0096b2b0(&local_30,*piVar2,"parameters",10);
  if ((char)local_30 == '\x04') {
    uVar7 = 1;
    iVar9 = *piVar2;
    pcVar8 = ":";
    do {
      uVar13 = *(uint *)(iVar9 + 4);
      uVar5 = uVar13 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar9,pcVar8,uVar5);
      if (uVar13 == 0x7fffffff) goto LAB_00ec2148;
      pcVar8 = pcVar8 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
    if (*param_2 != -0x80000000) {
      piVar11 = (int *)param_2[1];
      iVar9 = param_2[2];
      uVar7 = 1;
      iVar14 = *piVar2;
      puVar6 = &DAT_0053340d;
      do {
        uVar13 = *(uint *)(iVar14 + 4);
        uVar5 = uVar13 ^ 0x7fffffff;
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        FUN_01284394(iVar14,puVar6,uVar5);
        if (uVar13 == 0x7fffffff) goto LAB_00ec2148;
        puVar6 = puVar6 + uVar5;
        uVar7 = uVar7 - uVar5;
      } while (uVar7 != 0);
      iVar3 = 0x100;
      if (iVar9 == 0) {
        uVar7 = 1;
        pcVar8 = "]";
        do {
          uVar13 = *(uint *)(iVar14 + 4);
          uVar5 = uVar13 ^ 0x7fffffff;
          if (uVar7 < uVar5) {
            uVar5 = uVar7;
          }
          FUN_01284394(iVar14,pcVar8,uVar5);
          bVar10 = false;
          if (uVar13 == 0x7fffffff) goto LAB_00ec2148;
          pcVar8 = pcVar8 + uVar5;
          uVar7 = uVar7 - uVar5;
        } while (uVar7 != 0);
        iVar3 = 0;
      }
      else {
        bVar10 = true;
      }
      piVar12 = piVar11;
      do {
        if (piVar12 == piVar11 + iVar9 * 0x74) {
          if (iVar3 == 0) {
            return 0;
          }
          uVar7 = 1;
          iVar9 = *piVar2;
          pcVar8 = "]";
          while( true ) {
            uVar13 = *(uint *)(iVar9 + 4);
            uVar5 = uVar13 ^ 0x7fffffff;
            if (uVar7 < uVar5) {
              uVar5 = uVar7;
            }
            FUN_01284394(iVar9,pcVar8,uVar5);
            if (uVar13 == 0x7fffffff) break;
            pcVar8 = pcVar8 + uVar5;
            uVar7 = uVar7 - uVar5;
            if (uVar7 == 0) {
              return 0;
            }
          }
LAB_00ec21ec:
          local_30 = 2;
          local_2c = &DAT_01d2e7b8;
LAB_00ec21fc:
          iVar9 = FUN_01966f50(local_30,local_2c);
          return iVar9;
        }
        iVar14 = *piVar2;
        if (!bVar10) {
          uVar7 = 1;
          pcVar8 = ",";
          do {
            uVar13 = *(uint *)(iVar14 + 4);
            uVar5 = uVar13 ^ 0x7fffffff;
            if (uVar7 < uVar5) {
              uVar5 = uVar7;
            }
            FUN_01284394(iVar14,pcVar8,uVar5);
            if (uVar13 == 0x7fffffff) goto LAB_00ec21ec;
            pcVar8 = pcVar8 + uVar5;
            uVar7 = uVar7 - uVar5;
          } while (uVar7 != 0);
          iVar14 = *piVar2;
        }
        uVar7 = 1;
        pcVar8 = "{";
        do {
          uVar13 = *(uint *)(iVar14 + 4);
          uVar5 = uVar13 ^ 0x7fffffff;
          if (uVar7 < uVar5) {
            uVar5 = uVar7;
          }
          FUN_01284394(iVar14,pcVar8,uVar5);
          if (uVar13 == 0x7fffffff) goto LAB_00ec21ec;
          pcVar8 = pcVar8 + uVar5;
          uVar7 = uVar7 - uVar5;
        } while (uVar7 != 0);
        local_38 = 0x100;
        local_34 = piVar2;
        iVar14 = FUN_0096b5ec(&local_38,&DAT_0056ee18,4,piVar12[0x6d],piVar12[0x6e]);
        piVar1 = local_34;
        if (iVar14 != 0) {
          return iVar14;
        }
        if ((char)local_38 == '\x01') goto LAB_00ec2210;
        if (local_38._1_1_ != '\x01') {
          iVar14 = *local_34;
          uVar7 = 1;
          pcVar8 = ",";
          do {
            uVar13 = *(uint *)(iVar14 + 4);
            uVar5 = uVar13 ^ 0x7fffffff;
            if (uVar7 < uVar5) {
              uVar5 = uVar7;
            }
            FUN_01284394(iVar14,pcVar8,uVar5);
            if (uVar13 == 0x7fffffff) goto LAB_00ec21ec;
            pcVar8 = pcVar8 + uVar5;
            uVar7 = uVar7 - uVar5;
          } while (uVar7 != 0);
        }
        local_38._0_2_ = CONCAT11(2,(char)local_38);
        FUN_0096b2b0(&local_30,*piVar1,
                     "ininciniinkapplication/inkml+xmlinkmlinlinsapplication/x-internet-signup",2);
        if ((char)local_30 != '\x04') goto LAB_00ec21fc;
        iVar14 = *piVar1;
        uVar7 = 1;
        pcVar8 = ":";
        do {
          uVar13 = *(uint *)(iVar14 + 4);
          uVar5 = uVar13 ^ 0x7fffffff;
          if (uVar7 < uVar5) {
            uVar5 = uVar7;
          }
          FUN_01284394(iVar14,pcVar8,uVar5);
          if (uVar13 == 0x7fffffff) goto LAB_00ec21ec;
          pcVar8 = pcVar8 + uVar5;
          uVar7 = uVar7 - uVar5;
        } while (uVar7 != 0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)piVar12[0x73]) {
        case '\0':
          iVar14 = *piVar1;
          uVar4 = 5;
          pcVar8 = &DAT_0050c2f4;
          break;
        case '\x01':
          iVar14 = *piVar1;
          uVar4 = 4;
          pcVar8 = &DAT_0056ef14;
          break;
        case '\x02':
          iVar14 = *piVar1;
          pcVar8 = &DAT_00532582;
          goto LAB_00ec1e40;
        case '\x03':
          iVar14 = *piVar1;
          pcVar8 = "co";
LAB_00ec1e40:
          uVar4 = 6;
        }
        FUN_0096b2b0(&local_30,iVar14,pcVar8,uVar4);
        iVar14 = 0;
        if ((char)local_30 != '\x04') {
          iVar14 = FUN_01966f50(local_30,local_2c);
        }
        if (iVar14 != 0) {
          return iVar14;
        }
        if (piVar12[0x6f] != -0x80000000) {
          iVar14 = FUN_00ebc430(&local_38,"description",0xb);
          if (iVar14 != 0) {
            return iVar14;
          }
          if ((char)local_38 == '\x01') goto LAB_00ec2210;
        }
        piVar1 = local_34;
        if (local_38._1_1_ != '\x01') {
          iVar14 = *local_34;
          uVar7 = 1;
          pcVar8 = ",";
          do {
            uVar13 = *(uint *)(iVar14 + 4);
            uVar5 = uVar13 ^ 0x7fffffff;
            if (uVar7 < uVar5) {
              uVar5 = uVar7;
            }
            FUN_01284394(iVar14,pcVar8,uVar5);
            if (uVar13 == 0x7fffffff) goto LAB_00ec21ec;
            pcVar8 = pcVar8 + uVar5;
            uVar7 = uVar7 - uVar5;
          } while (uVar7 != 0);
        }
        local_38._0_2_ = CONCAT11(2,(char)local_38);
        FUN_0096b2b0(&local_30,*piVar1,&DAT_0056fdb8,8);
        if ((char)local_30 != '\x04') goto LAB_00ec21fc;
        iVar14 = *piVar1;
        uVar7 = 1;
        pcVar8 = ":";
        do {
          uVar13 = *(uint *)(iVar14 + 4);
          uVar5 = uVar13 ^ 0x7fffffff;
          if (uVar7 < uVar5) {
            uVar5 = uVar7;
          }
          FUN_01284394(iVar14,pcVar8,uVar5);
          if (uVar13 == 0x7fffffff) goto LAB_00ec21ec;
          pcVar8 = pcVar8 + uVar5;
          uVar7 = uVar7 - uVar5;
        } while (uVar7 != 0);
        iVar14 = FUN_00d92980((char)piVar12[0x72],*piVar1);
        if (iVar14 != 0) {
          return iVar14;
        }
        if ((*(char *)((int)piVar12 + 0x1c9) != '\x02') &&
           (iVar14 = FUN_00ec340c(&local_38), iVar14 != 0)) {
          return iVar14;
        }
        if ((*piVar12 != 8) && (iVar14 = FUN_00ebc020(&local_38,piVar12), iVar14 != 0)) {
          return iVar14;
        }
        if ((*(char *)((int)piVar12 + 0x1cd) != '\a') &&
           (iVar14 = FUN_00ebce1c(&local_38), iVar14 != 0)) {
          return iVar14;
        }
        if ((*(char *)((int)piVar12 + 0x1ca) != '\x02') &&
           (iVar14 = FUN_00ebd130(&local_38,"explode",7), iVar14 != 0)) {
          return iVar14;
        }
        if ((*(char *)((int)piVar12 + 0x1cb) != '\x02') &&
           (iVar14 = FUN_00ebd130(&local_38,"allowReserved",0xd), iVar14 != 0)) {
          return iVar14;
        }
        if (((char)piVar12[0x5e] != '\x06') &&
           (iVar14 = FUN_00ebc228(&local_38,"examplematrix",7), iVar14 != 0)) {
          return iVar14;
        }
        if ((piVar12[100] != 0) && (iVar14 = FUN_011e01bc(piVar12 + 100,&local_38), iVar14 != 0)) {
          return iVar14;
        }
        if ((local_38 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
        }
        if ((local_38 & 0xff00) != 0) {
          uVar7 = 1;
          iVar14 = *local_34;
          pcVar8 = "}";
          do {
            uVar13 = *(uint *)(iVar14 + 4);
            uVar5 = uVar13 ^ 0x7fffffff;
            if (uVar7 < uVar5) {
              uVar5 = uVar7;
            }
            FUN_01284394(iVar14,pcVar8,uVar5);
            if (uVar13 == 0x7fffffff) goto LAB_00ec21ec;
            pcVar8 = pcVar8 + uVar5;
            uVar7 = uVar7 - uVar5;
          } while (uVar7 != 0);
        }
        bVar10 = false;
        iVar3 = 0x200;
        piVar12 = piVar12 + 0x74;
      } while( true );
    }
    uVar7 = 4;
    iVar9 = *piVar2;
    puVar6 = &DAT_0056d030;
    while( true ) {
      uVar13 = *(uint *)(iVar9 + 4);
      uVar5 = uVar13 ^ 0x7fffffff;
      if (uVar7 < uVar5) {
        uVar5 = uVar7;
      }
      FUN_01284394(iVar9,puVar6,uVar5);
      if (uVar13 == 0x7fffffff) break;
      puVar6 = puVar6 + uVar5;
      uVar7 = uVar7 - uVar5;
      if (uVar7 == 0) {
        return 0;
      }
    }
LAB_00ec2148:
    local_30 = 2;
    local_2c = &DAT_01d2e7b8;
  }
  iVar9 = FUN_01966f50(local_30,local_2c);
  return iVar9;
}

