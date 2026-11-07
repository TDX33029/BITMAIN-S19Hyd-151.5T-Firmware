// FUN_008ad758 @ 008ad758 size=188 calls_out=3 calls_in=4
// strings: 

undefined8 FUN_008ad758(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  local_30 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_c = 0;
  local_18 = 0;
  local_1c = 0;
  local_34 = 4;
  local_44 = 4;
  local_54 = 1;
  local_58 = 1;
  local_10 = 1;
  local_14 = 1;
  local_20 = 4;
  piVar2 = (int *)thunk_FUN_016d4a50(0x50);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x50);
  }
  FUN_016dd1aa(piVar2,&local_58,0x50);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + 1;
  if (iVar3 < 0) {
    software_udf(0xfdee,0x8ad804);
    return CONCAT44(iVar3 + 1,iVar3);
  }
  return CONCAT44(piVar2,piVar2);
}

