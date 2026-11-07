// FUN_0005ea7c @ 0005ea7c  size=372  callers=2
// program: bmminer


void FUN_0005ea7c(undefined4 *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *__s;
  int iVar7;
  undefined4 extraout_r12;
  undefined4 *puVar8;
  bool bVar9;
  size_t local_1c;
  
  uVar5 = param_1[1];
  bVar9 = 3 < uVar5;
  if (uVar5 != 4) {
    bVar9 = uVar5 != 1;
  }
  if (!bVar9 || (uVar5 == 4 || uVar5 == 2)) {
    if (param_1[6] != 0) {
      if (*(char *)*param_1 == '-') {
        __s = (char *)*param_1 + 1;
        local_1c = strcspn(__s,"|= ");
        while (*__s != '-') {
          if (local_1c != 1) {
            __s = __s + -1;
            sVar1 = errx(1,"Option %s: invalid short option \'%.*s\'",*param_1,local_1c + 1,__s);
            uVar2 = extraout_r12;
LAB_0005eb94:
            uVar2 = errx(uVar2,"Option %s: does not take arguments \'%s\'",*param_1,__s + sVar1 + 1)
            ;
            goto LAB_0005ebb0;
          }
          iVar7 = param_1[1];
          DAT_012a2954 = DAT_012a2954 + 1;
          if ((iVar7 - 2U & 0xfffffffd) == 0) {
            DAT_012a2948 = DAT_012a2948 + 1;
          }
LAB_0005eb14:
          if (iVar7 == 1) {
            uVar2 = 1;
            sVar1 = local_1c;
            if (__s[local_1c] == '=' || __s[local_1c] == ' ') goto LAB_0005eb94;
          }
          __s = (char *)FUN_0005e97c(__s,&local_1c);
          if (__s == (char *)0x0) {
            return;
          }
        }
        uVar2 = 1;
        if (local_1c != 1) {
          iVar7 = param_1[1];
          DAT_012a2950 = DAT_012a2950 + 1;
          goto LAB_0005eb14;
        }
LAB_0005ebb0:
        errx(uVar2,"Option %s: invalid long option \'--\'",*param_1);
      }
      errx(1,"Option %s: does not begin with \'-\'");
    }
    errx(1,"Option %s: description cannot be NULL");
  }
  puVar3 = (undefined4 *)errx(1,"Option %s: unknown entry type %u");
  DAT_012a295c = realloc(DAT_012a295c,(DAT_012a2958 + 1) * 0x1c);
  uVar2 = puVar3[1];
  uVar4 = puVar3[2];
  uVar6 = puVar3[3];
  puVar8 = (undefined4 *)((int)DAT_012a295c + DAT_012a2958 * 0x1c);
  DAT_012a2958 = DAT_012a2958 + 1;
  *puVar8 = *puVar3;
  puVar8[1] = uVar2;
  puVar8[2] = uVar4;
  puVar8[3] = uVar6;
  uVar2 = puVar3[5];
  uVar4 = puVar3[6];
  puVar8[4] = puVar3[4];
  puVar8[5] = uVar2;
  puVar8[6] = uVar4;
  return;
}

