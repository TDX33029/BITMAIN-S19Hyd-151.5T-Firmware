// FUN_00029628 @ 00029628  size=868  callers=1
// program: bmminer


undefined4 FUN_00029628(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  size_t __nmemb;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 local_2020;
  undefined4 uStack_201c;
  undefined4 uStack_2018;
  undefined4 uStack_2014;
  char local_2010 [8180];
  
  pcVar9 = (char *)&local_2020;
  piVar3 = (int *)FUN_0007eb20(param_1,"power");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    pcVar11 = "get power failed\n";
LAB_000296d4:
    uVar5 = *(undefined4 *)(pcVar11 + 4);
    uVar6 = *(undefined4 *)(pcVar11 + 8);
    uVar7 = *(undefined4 *)(pcVar11 + 0xc);
    uVar10 = *(undefined4 *)(pcVar11 + 0x10);
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar11;
    *(undefined4 *)(pcVar9 + 4) = uVar5;
    *(undefined4 *)(pcVar9 + 8) = uVar6;
    *(undefined4 *)(pcVar9 + 0xc) = uVar7;
    *(short *)(pcVar9 + 0x10) = (short)uVar10;
    FUN_0004948c(3,&local_2020,0);
    return 0xffffffff;
  }
  if (4 < DAT_000be63c) {
    local_2020._0_1_ = 'p';
    local_2020._1_1_ = 'o';
    local_2020._2_1_ = 'w';
    local_2020._3_1_ = 'e';
    uStack_201c._0_1_ = 'r';
    uStack_201c._1_1_ = ':';
    uStack_201c._2_1_ = '\n';
    uStack_201c._3_1_ = '\0';
    FUN_0004948c(4,&local_2020);
  }
  piVar4 = (int *)FUN_0007eb20(piVar3,"type");
  if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    pcVar9 = "get type failed\n";
  }
  else {
    if (4 < DAT_000be63c) {
      pcVar9 = (char *)FUN_00080310();
      snprintf((char *)&local_2020,0x2000,"type: %s\n",pcVar9);
      FUN_0004948c(4,&local_2020,0);
    }
    piVar4 = (int *)FUN_0007eb20(piVar3,"release_version");
    if ((piVar4 == (int *)0x0) || (*piVar4 != 1)) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      pcVar11 = "ion array failed\n";
      local_2020._0_1_ = 'g';
      local_2020._1_1_ = 'e';
      local_2020._2_1_ = 't';
      local_2020._3_1_ = ' ';
      uStack_201c._0_1_ = 'r';
      uStack_201c._1_1_ = 'e';
      uStack_201c._2_1_ = 'l';
      uStack_201c._3_1_ = 'e';
      uStack_2018._0_1_ = 'a';
      uStack_2018._1_1_ = 's';
      uStack_2018._2_1_ = 'e';
      uStack_2018._3_1_ = ' ';
      uStack_2014._0_1_ = 'v';
      uStack_2014._1_1_ = 'e';
      uStack_2014._2_1_ = 'r';
      uStack_2014._3_1_ = 's';
      pcVar9 = local_2010;
      goto LAB_000296d4;
    }
    __nmemb = FUN_0007f66c();
    DAT_00a4ee40 = __nmemb;
    DAT_00a4ee44 = calloc(__nmemb,2);
    if (0 < (int)__nmemb) {
      iVar8 = 0;
      do {
        FUN_0007f6b8(piVar4,iVar8);
        uVar2 = FUN_000807e0();
        iVar1 = iVar8 * 2;
        iVar8 = iVar8 + 1;
        *(undefined2 *)((int)DAT_00a4ee44 + iVar1) = uVar2;
        if (4 < DAT_000be63c) {
          snprintf((char *)&local_2020,0x2000,"psu version = 0x%x",
                   (uint)*(ushort *)((int)DAT_00a4ee44 + iVar1));
          FUN_0004948c(4,&local_2020,0);
        }
      } while (iVar8 < (int)DAT_00a4ee40);
    }
    piVar4 = (int *)FUN_0007eb20(piVar3,"i2c_addr");
    if ((piVar4 == (int *)0x0) || (*piVar4 != 3)) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      local_2020._0_1_ = 'g';
      local_2020._1_1_ = 'e';
      local_2020._2_1_ = 't';
      local_2020._3_1_ = ' ';
      uStack_201c._0_1_ = 'i';
      uStack_201c._1_1_ = '2';
      uStack_201c._2_1_ = 'c';
      uStack_201c._3_1_ = '_';
      uStack_2018._0_1_ = 'a';
      uStack_2018._1_1_ = 'd';
      uStack_2018._2_1_ = 'd';
      uStack_2018._3_1_ = 'r';
      uStack_2014._0_1_ = ' ';
      uStack_2014._1_1_ = 'f';
      uStack_2014._2_1_ = 'a';
      uStack_2014._3_1_ = 'i';
      builtin_strncpy(local_2010,"led\n",5);
      FUN_0004948c(3,&local_2020,0);
      return 0xffffffff;
    }
    if (4 < DAT_000be63c) {
      iVar8 = FUN_000807e0();
      snprintf((char *)&local_2020,0x2000,"i2c_addr: %d\n",iVar8);
      FUN_0004948c(4,&local_2020,0);
    }
    piVar3 = (int *)FUN_0007eb20(piVar3,&DAT_0009c968);
    if ((piVar3 != (int *)0x0) && (*piVar3 == 3)) {
      if (DAT_000be63c < 5) {
        return 0;
      }
      iVar8 = FUN_000807e0(piVar3);
      snprintf((char *)&local_2020,0x2000,"gpio: %d\n",iVar8);
      FUN_0004948c(4,&local_2020,0);
      return 0;
    }
    if (DAT_000be63c < 4) {
      return 0xffffffff;
    }
    pcVar9 = "get gpio failed\n";
  }
  local_2020 = *(undefined4 *)pcVar9;
  uStack_201c = *(undefined4 *)(pcVar9 + 4);
  uStack_2018 = *(undefined4 *)(pcVar9 + 8);
  uStack_2014 = *(undefined4 *)(pcVar9 + 0xc);
  local_2010[0] = (char)*(undefined4 *)(pcVar9 + 0x10);
  FUN_0004948c(3,&local_2020,0);
  return 0xffffffff;
}

