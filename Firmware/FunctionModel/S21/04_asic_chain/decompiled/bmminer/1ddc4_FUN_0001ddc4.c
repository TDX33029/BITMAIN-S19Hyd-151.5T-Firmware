// FUN_0001ddc4 @ 0001ddc4  size=396  callers=1
// program: bmminer


undefined4 FUN_0001ddc4(int param_1,uint param_2)

{
  uint param4;
  undefined4 uVar1;
  int iVar2;
  int local_2030;
  int local_202c;
  undefined1 auStack_2028 [4];
  uint local_2024;
  char acStack_2020 [8192];
  
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(acStack_2020,0x2000,"eeprom_set_freq, chain = %d, freq = %d.\n",param_1,param_2);
      FUN_0004948c(4,acStack_2020,0);
      return 0xffffffff;
    }
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(DAT_000c0410 + param_1 * 4);
    param4 = (**(code **)(iVar2 + 0xcc))(iVar2);
    (**(code **)(iVar2 + 0xd0))(iVar2,param_2 & 0xffff);
    if (3 < DAT_000be63c) {
      snprintf(acStack_2020,0x2000,"eeprom_set_freq, chain = %d, pre freq = %d, new freq = %d.\n",
               param_1,param4,param_2);
      FUN_0004948c(3,acStack_2020,0);
    }
    local_2030 = 0x100;
    (**(code **)(iVar2 + 0xc))(iVar2,acStack_2020,&local_2030,auStack_2028);
    local_202c = 0x100 - local_2030;
    (**(code **)(iVar2 + 0x10))(iVar2,acStack_2020 + local_2030,&local_202c,&local_2024);
    iVar2 = FUN_0001e118(acStack_2020,0x100);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0x124))();
    }
    if (param4 == param_2) {
      uVar1 = 0;
    }
    else {
      FUN_0006a270(param_1,local_2024 & 0xff,acStack_2020 + local_2024,local_202c);
      uVar1 = 0;
    }
  }
  return uVar1;
}

