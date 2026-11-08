// FUN_014ea3d8 @ 014ea3d8 size=452 calls_out=2 calls_in=0
// strings: DnsName

undefined4 FUN_014ea3d8(int *****param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *****pppppiVar4;
  undefined1 *puVar5;
  int *****local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 local_2d;
  int *****local_2c;
  int *****local_28;
  undefined1 *local_24;
  
  pppppiVar4 = (int *****)*param_2;
  puVar5 = (undefined1 *)param_2[1];
  pcVar3 = *(code **)(puVar5 + 0xc);
  iVar1 = (*pcVar3)(pppppiVar4,"DnsName",7);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(pppppiVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      if (*param_1 == (int ****)0x80000000) {
        local_28 = param_1 + 1;
        local_38 = &LAB_0162209c;
      }
      else {
        local_38 = &LAB_0157d350;
        local_28 = param_1;
      }
      local_3c = (int *****)&local_28;
      iVar1 = FUN_00fa948c(pppppiVar4,puVar5,&DAT_00590e71,&local_3c);
    }
    else {
      iVar1 = (*pcVar3)(pppppiVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_34 = &local_2d;
      local_2d = 1;
      if (*param_1 == (int ****)0x80000000) {
        local_2c = param_1 + 1;
        local_24 = &LAB_0162209c;
      }
      else {
        local_24 = &LAB_0157d350;
        local_2c = param_1;
      }
      local_28 = (int *****)&local_2c;
      local_3c = pppppiVar4;
      local_38 = puVar5;
      iVar1 = FUN_00fa948c(&local_3c,&DAT_01880dc4,&DAT_00590e71,&local_28);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fb1f64(&local_3c,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      uVar2 = (*pcVar3)(pppppiVar4,&DAT_00418e07,1);
      return uVar2;
    }
  }
  return 1;
}

