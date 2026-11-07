// FUN_017ae570 @ 017ae570 size=504 calls_out=4 calls_in=0
// strings: Chunked | state | chunk_len | extensions_cnt | Length

undefined4 FUN_017ae570(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  char *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == '\0') {
    local_30 = param_1 + 8;
    uVar1 = FUN_013032f4(param_2,"Length",6,&local_30,&LAB_015f5418);
  }
  else if (*param_1 == '\x01') {
    local_30 = param_1 + 0x10;
    uVar1 = FUN_01303e54(param_2,"Chunked",7,"state",5,param_1 + 1,FUN_017ae89c,"chunk_len",9,
                         param_1 + 8,&LAB_01aaa164,"extensions_cnt",0xe,&local_30,&LAB_015f5418);
  }
  else {
    uVar1 = *param_2;
    iVar4 = param_2[1];
    pcVar3 = *(code **)(iVar4 + 0xc);
    iVar2 = (*pcVar3)(uVar1,"Eof",3);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_012fbb44(param_1 + 1,param_2);
    }
    else {
      iVar2 = (*pcVar3)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_30 = (char *)&local_40;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar1;
      local_3c = iVar4;
      iVar2 = FUN_012fbb44(param_1 + 1,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_01302620(&local_40,&DAT_005312e2,2);
    }
    if (iVar2 != 0) {
      return 1;
    }
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  return uVar1;
}

