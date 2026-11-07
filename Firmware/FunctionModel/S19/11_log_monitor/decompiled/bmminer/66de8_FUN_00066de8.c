// FUN_00066de8 @ 00066de8  size=936  callers=1
// program: bmminer


uint * FUN_00066de8(int param_1)

{
  int iVar1;
  uint *puVar2;
  __int32_t **pp_Var3;
  byte *pbVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  ushort uVar10;
  __int32_t *p_Var11;
  __int32_t *p_Var12;
  uint local_2024;
  byte local_2020;
  byte local_201f [1023];
  char local_1c20;
  char local_101c [4104];
  
  local_2024 = 0;
  if (param_1 == 0) {
    FUN_000658a8(2,"src/level.c",0x4d,"line is null or 0");
    return (uint *)0x0;
  }
  memset(&local_2020,0,0x1001);
  memset(local_101c,0,0x1001);
  iVar1 = __isoc99_sscanf(param_1," %[^= \t] = %d ,%s",&local_2020,&local_2024,local_101c);
  if (iVar1 < 2) {
    FUN_000658a8(2,"src/level.c",0x54,"level[%s], syntax wrong",param_1);
    return (uint *)0x0;
  }
  if (0xff < local_2024) {
    FUN_000658a8(2,"src/level.c",0x5a,"l[%d] not in [0,255], wrong",local_2024);
    return (uint *)0x0;
  }
  uVar10 = (ushort)local_2020;
  if (uVar10 == 0) {
    FUN_000658a8(2,"src/level.c",0x5f,"str[0] = 0");
    return (uint *)0x0;
  }
  puVar2 = calloc(1,0x810);
  if (puVar2 == (uint *)0x0) {
    piVar5 = __errno_location();
    FUN_000658a8(2,"src/level.c",0x65,"calloc fail, errno[%d]",*piVar5);
    return (uint *)0x0;
  }
  *puVar2 = local_2024;
  if (local_101c[0] != '\0') {
    iVar1 = strcasecmp(local_101c,"LOG_EMERG");
    if (iVar1 == 0) {
      puVar2[0x203] = 0;
      goto LAB_00066ea4;
    }
    iVar1 = strcasecmp(local_101c,"LOG_ALERT");
    if (iVar1 == 0) {
      puVar2[0x203] = 1;
      goto LAB_00066ea4;
    }
    iVar1 = strcasecmp(local_101c,"LOG_CRIT");
    if (iVar1 == 0) {
      puVar2[0x203] = 2;
      goto LAB_00066ea4;
    }
    iVar1 = strcasecmp(local_101c,"LOG_ERR");
    if (iVar1 == 0) {
      puVar2[0x203] = 3;
      goto LAB_00066ea4;
    }
    iVar1 = strcasecmp(local_101c,"LOG_WARNING");
    if (iVar1 == 0) {
      puVar2[0x203] = 4;
      goto LAB_00066ea4;
    }
    iVar1 = strcasecmp(local_101c,"LOG_NOTICE");
    if (iVar1 == 0) {
      puVar2[0x203] = 5;
      goto LAB_00066ea4;
    }
    iVar1 = strcasecmp(local_101c,"LOG_INFO");
    if (iVar1 == 0) {
      puVar2[0x203] = 6;
      goto LAB_00066ea4;
    }
    iVar1 = strcasecmp(local_101c,"LOG_DEBUG");
    if (iVar1 != 0) {
      FUN_000658a8(2,"src/level.c",0x3f,"wrong syslog level[%s]",local_101c);
      puVar2[0x203] = 0xffffff45;
      FUN_000658a8(2,"src/level.c",0x71,"syslog_level_atoi fail");
LAB_0006705c:
      FUN_000658a8(2,"src/level.c",0x8a,"line[%s]",param_1);
      FUN_00066d84(puVar2);
      return (uint *)0x0;
    }
  }
  puVar2[0x203] = 7;
LAB_00066ea4:
  pp_Var3 = __ctype_toupper_loc();
  p_Var11 = *pp_Var3;
  pp_Var3 = __ctype_tolower_loc();
  p_Var12 = *pp_Var3;
  puVar9 = puVar2 + 0x101;
  puVar6 = (undefined1 *)((int)puVar2 + 3);
  pbVar4 = &local_2020;
  uVar8 = 0;
  do {
    uVar7 = uVar8;
    uVar8 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = (char)p_Var11[(short)uVar10];
    puVar9 = (uint *)((int)puVar9 + 1);
    *(char *)puVar9 = (char)p_Var12[(short)uVar10];
    if (uVar8 == 0x400) {
      if (local_1c20 != '\0') {
        FUN_000658a8(2,"src/level.c",0x7e,"not enough space for str, str[%s] > %d",&local_2020,0x400
                    );
        goto LAB_0006705c;
      }
      break;
    }
    pbVar4 = pbVar4 + 1;
    uVar10 = (ushort)*pbVar4;
  } while (uVar10 != 0);
  *(undefined1 *)((int)puVar2 + uVar7 + 5) = 0;
  *(undefined1 *)((int)puVar2 + uVar7 + 0x406) = 0;
  puVar2[0x202] = uVar8;
  return puVar2;
}

