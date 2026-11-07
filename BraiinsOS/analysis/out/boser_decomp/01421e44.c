// FUN_01421e44 @ 01421e44 size=248 calls_out=3 calls_in=4
// strings: 

char FUN_01421e44(int param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  
  cVar1 = '\0';
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_01656cb0(&local_2c,*(int *)(param_1 + 4) + 8);
    if (local_2c == 1) {
      local_1c = local_24;
      local_20 = local_28;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01cf478c,&DAT_01d18fe0);
    }
    cVar1 = *(char *)(local_28 + 0x10);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      if (param_2 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
      }
      if (*(int *)(local_28 + 8) != 0) {
        (**(code **)(*(int *)(local_28 + 8) + 0xc))(*(undefined4 *)(local_28 + 0xc));
      }
      *(undefined8 *)(local_28 + 8) = uVar2;
    }
    FUN_00a97e8c(local_28,local_24);
  }
  return cVar1;
}

