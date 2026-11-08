// FUN_00e80cbc @ 00e80cbc size=216 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_00e80cbc(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 uStack_19;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x12]) {
  case '\0':
    iVar2 = param_1[1];
    FUN_00e835e4(*(undefined4 *)(*param_1 + 0x48));
    if (*(char *)(iVar2 + 0x5c) == '\0') goto LAB_00e80d50;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[2] = iVar2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b000);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b000);
  }
  bVar1 = FUN_00e8377c(param_1 + 2,param_2);
  if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 0x12) = 3;
    return 1;
  }
  FUN_00e80bf8(param_1 + 2);
  if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00359399,0x1e,&uStack_19,&DAT_0187aab0,&DAT_0187b010);
  }
LAB_00e80d50:
  *(undefined1 *)(param_1 + 0x12) = 1;
  return 0;
}

