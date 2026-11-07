// FUN_00035f58 @ 00035f58  size=636  callers=1
// program: bmminer


void FUN_00035f58(char *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char local_83c [2072];
  
  iVar7 = 0;
  do {
    iVar9 = iVar7 + 1;
    iVar1 = FUN_000201d8(iVar7);
    if (iVar1 != 0) {
      iVar8 = 0;
      local_83c[0x14] = '{';
      local_83c[0x15] = '\0';
      local_83c[0x16] = '\0';
      local_83c[0x17] = '\0';
      memset(local_83c + 0x18,0,0x7fc);
      local_83c[0] = '\0';
      local_83c[1] = '\0';
      local_83c[2] = '\0';
      local_83c[3] = '\0';
      local_83c[4] = '\0';
      local_83c[5] = '\0';
      local_83c[6] = '\0';
      local_83c[7] = '\0';
      local_83c[8] = '\0';
      local_83c[9] = '\0';
      local_83c[10] = '\0';
      local_83c[0xb] = '\0';
      local_83c[0xc] = '\0';
      local_83c[0xd] = '\0';
      local_83c[0xe] = '\0';
      local_83c[0xf] = '\0';
      local_83c[0x10] = '\0';
      local_83c[0x11] = '\0';
      local_83c[0x12] = '\0';
      local_83c[0x13] = '\0';
      snprintf(local_83c,0x14,"Chain%d:{",iVar9);
      strncat(local_83c + 0x14,local_83c,0x7fe);
      iVar6 = DAT_0048d370 % 0x3c + -1;
      iVar1 = iVar6 - param_2;
      do {
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x3c;
        }
        iVar6 = iVar6 + -1;
        iVar8 = iVar8 + *(int *)(&DAT_0048e3f0 + (iVar7 * 0x3c00 + iVar4) * 8);
      } while (iVar1 != iVar6);
      snprintf(local_83c,0x14,"N%d=%d",0,iVar8);
      iVar6 = 1;
      sVar2 = strlen(local_83c + 0x14);
      strncat(local_83c + 0x14,local_83c,0x7ff - sVar2);
      iVar1 = FUN_0002002c();
      if (1 < iVar1) {
        do {
          iVar1 = 0;
          iVar8 = DAT_0048d370 % 0x3c + -1;
          iVar4 = iVar8 - param_2;
          do {
            iVar5 = iVar8;
            if (iVar8 < 0) {
              iVar5 = iVar8 + 0x3c;
            }
            iVar8 = iVar8 + -1;
            iVar1 = iVar1 + *(int *)(&DAT_0048e3f0 + (iVar7 * 0x3c00 + iVar6 * 0x3c + iVar5) * 8);
          } while (iVar4 != iVar8);
          snprintf(local_83c,0x14,",N%d=%d",iVar6,iVar1);
          iVar6 = iVar6 + 1;
          sVar2 = strlen(local_83c + 0x14);
          strncat(local_83c + 0x14,local_83c,0x7ff - sVar2);
          iVar1 = FUN_0002002c();
        } while (iVar6 < iVar1);
      }
      sVar2 = strlen(local_83c + 0x14);
      strncat(local_83c + 0x14,"},",0x7ff - sVar2);
      sVar2 = strlen(param_1);
      sVar3 = strlen(local_83c + 0x14);
      strncat(param_1,local_83c + 0x14,0x1fff - (sVar2 + sVar3));
    }
    iVar7 = iVar9;
  } while (iVar9 != 4);
  sVar2 = strlen(param_1);
  param_1[sVar2 - 1] = '\0';
  return;
}

