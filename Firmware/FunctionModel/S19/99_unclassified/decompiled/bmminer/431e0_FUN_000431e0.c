// FUN_000431e0 @ 000431e0  size=1200  callers=1
// program: bmminer


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_000431e0(undefined4 param_1,undefined4 *param_2,int *param_3,code *param_4)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  void *__ptr;
  int iVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  size_t sVar11;
  int iVar12;
  char *local_38;
  int local_30;
  size_t local_2c [2];
  
  pcVar3 = getenv("POSIXLY_CORRECT");
  pcVar4 = (char *)param_2[1];
  if (pcVar3 == (char *)0x0) {
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    if (*pcVar4 == '-') {
      piVar9 = param_2 + 1;
      iVar8 = 1;
    }
    else {
      iVar8 = 1;
      piVar2 = param_2 + 2;
      do {
        piVar9 = piVar2;
        pcVar4 = (char *)*piVar9;
        iVar8 = iVar8 + 1;
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
        piVar2 = piVar9 + 1;
      } while (*pcVar4 != '-');
    }
    cVar1 = pcVar4[1];
  }
  else {
    piVar9 = param_2 + 1;
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
    if (*pcVar4 != '-') {
      return 0;
    }
    cVar1 = pcVar4[1];
    iVar8 = 1;
  }
  if (cVar1 == '-') {
    if (pcVar4[2] == '\0') {
      FUN_000431a8(param_1,param_2,iVar8);
      return 0;
    }
    if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("*offset == 0","ccan/opt/parse.c",0x3b,"parse_one");
    }
    pcVar4 = (char *)FUN_00042dec(&local_30,local_2c);
    if (pcVar4 != (char *)0x0) {
      do {
        sVar6 = local_2c[0];
        iVar10 = *piVar9;
        iVar5 = strncmp((char *)(iVar10 + 2),pcVar4,local_2c[0]);
        if (iVar5 == 0) {
          sVar11 = sVar6 + 2;
          if (*(char *)(iVar10 + sVar11) == '=') {
            iVar5 = local_30 * 0x1c;
            iVar10 = iVar10 + sVar6 + 3;
            local_38 = pcVar4 + -2;
            iVar7 = DAT_00b2d26c + iVar5;
            if (*(int *)(iVar7 + 4) == 1) {
              local_2c[0] = sVar11;
              if (iVar10 != 0) {
                (*param_4)("%s: %.*s: %s",*param_2,sVar11,local_38,"doesn\'t allow an argument");
                return 0xffffffff;
              }
              goto LAB_00043490;
            }
            local_2c[0] = sVar11;
            if (iVar10 != 0) goto LAB_00043318;
          }
          else {
            if (*(char *)(iVar10 + sVar11) != '\0') goto LAB_00043440;
            local_38 = pcVar4 + -2;
            iVar7 = DAT_00b2d26c + local_30 * 0x1c;
            local_2c[0] = sVar11;
            if (*(int *)(iVar7 + 4) == 1) goto LAB_00043490;
          }
          local_38 = pcVar4 + -2;
          iVar5 = local_30 * 0x1c;
          iVar12 = *param_3;
          local_2c[0] = sVar11;
          goto LAB_00043300;
        }
LAB_00043440:
        pcVar4 = (char *)FUN_00042e44(pcVar4,&local_30,local_2c);
      } while (pcVar4 != (char *)0x0);
    }
  }
  else {
    local_38 = (char *)FUN_00042e9c(&local_30);
    if (local_38 != (char *)0x0) {
      iVar12 = *param_3 + 1;
      if (*local_38 != *(char *)(*piVar9 + iVar12)) {
        do {
          local_38 = (char *)FUN_00042efc(local_38,&local_30);
          if (local_38 == (char *)0x0) goto LAB_00043458;
          iVar12 = *param_3 + 1;
        } while (*(char *)(*piVar9 + iVar12) != *local_38);
      }
      local_38 = local_38 + -1;
      *param_3 = iVar12;
      local_2c[0] = 2;
      iVar5 = local_30 * 0x1c;
      iVar7 = DAT_00b2d26c + iVar5;
      if (*(int *)(iVar7 + 4) == 1) {
LAB_00043490:
        iVar10 = 0;
        __ptr = (void *)(**(code **)(iVar7 + 8))(*(undefined4 *)(iVar7 + 0x14));
      }
      else {
LAB_00043300:
        if ((iVar12 == 0) ||
           (iVar10 = *piVar9 + iVar12 + 1, *(char *)(*piVar9 + iVar12 + 1) == '\0')) {
          iVar10 = param_2[iVar8 + 1];
          if (iVar10 == 0) {
            (*param_4)("%s: %.*s: %s",*param_2,local_2c[0],local_38,"requires an argument");
            return 0xffffffff;
          }
        }
        else {
          *param_3 = 0;
        }
LAB_00043318:
        if (*(int *)(DAT_00b2d26c + iVar5 + 4) == 4) {
          FUN_000426f4(iVar10,*(undefined4 *)(DAT_00b2d26c + iVar5 + 0x14));
        }
        iVar5 = DAT_00b2d26c + local_30 * 0x1c;
        __ptr = (void *)(**(code **)(iVar5 + 0xc))(iVar10,*(undefined4 *)(iVar5 + 0x14));
      }
      if (__ptr != (void *)0x0) {
        (*param_4)("%s: %.*s: %s",*param_2,local_2c[0],local_38,__ptr);
        free(__ptr);
        return 0xffffffff;
      }
      if (*param_3 != 0) {
        if (*(char *)(*piVar9 + *param_3 + 1) != '\0') {
          return 1;
        }
        *param_3 = 0;
      }
      FUN_000431a8(param_1,param_2,iVar8);
      if ((iVar10 != 0) && (*piVar9 == iVar10)) {
        FUN_000431a8(param_1,param_2,iVar8);
      }
      return 1;
    }
  }
LAB_00043458:
  pcVar4 = (char *)*piVar9;
  sVar6 = strlen(pcVar4);
  (*param_4)("%s: %.*s: %s",*param_2,sVar6,pcVar4,"unrecognized option");
  return 0xffffffff;
}

