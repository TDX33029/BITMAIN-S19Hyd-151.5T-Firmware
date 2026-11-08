// FUN_00f0c060 @ 00f0c060 size=176 calls_out=2 calls_in=1
// strings: boolean | number | array

undefined4 FUN_00f0c060(undefined1 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    pcVar1 = "objectSingle";
    break;
  case 1:
    pcVar1 = "string";
    break;
  case 2:
    pcVar1 = "integer";
    goto LAB_00f0c0b4;
  case 3:
    pcVar1 = "number";
    break;
  case 4:
    pcVar1 = "boolean";
LAB_00f0c0b4:
    uVar2 = 7;
    goto LAB_00f0c104;
  case 5:
    uVar2 = 5;
    pcVar1 = "array";
    goto LAB_00f0c104;
  case 6:
    uVar2 = 4;
    pcVar1 = &DAT_0056d030;
    goto LAB_00f0c104;
  }
  uVar2 = 6;
LAB_00f0c104:
  FUN_0096b2b0(&local_10,param_2,pcVar1,uVar2);
  uVar2 = 0;
  if ((char)local_10 != '\x04') {
    uVar2 = FUN_01966f50(local_10,uStack_c);
  }
  return uVar2;
}

