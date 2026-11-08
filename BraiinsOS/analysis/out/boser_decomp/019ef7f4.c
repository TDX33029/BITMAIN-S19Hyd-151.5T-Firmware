// FUN_019ef7f4 @ 019ef7f4 size=240 calls_out=4 calls_in=77
// strings: 

undefined4 FUN_019ef7f4(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined1 local_11;
  
  uVar7 = thunk_FUN_01bee35a(param_1,0x20);
  puVar6 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar6[0xe] != '\x01') {
    local_11 = 1;
    if ((char)puVar6[0xe] == '\x02') goto LAB_019ef824;
    FUN_019a2bcc(puVar6,&LAB_019efb68);
    *(undefined1 *)(puVar6 + 0xe) = 1;
  }
  uVar2 = *puVar6;
  if (0x7ffffffe < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar6 = uVar2 + 1;
  if (puVar6[1] != 2) {
    if ((puVar6[1] & 1) == 0) {
      puVar4 = (uint *)puVar6[2];
      do {
        uVar2 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar2 + 1;
      uVar3 = 0;
    }
    else {
      puVar4 = (uint *)puVar6[2];
      do {
        uVar2 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar2 + 1;
      uVar3 = 1;
    }
    uVar5 = uVar2;
    if (uVar2 < 0x80000000) {
      uVar5 = *puVar6 - 1;
    }
    if ((int)uVar2 < 0) {
      software_udf(0xfdee,0x19ef8c8);
      return uVar3;
    }
    *puVar6 = uVar5;
    return uVar3;
  }
  *puVar6 = uVar2;
  local_11 = 0;
LAB_019ef824:
                    /* WARNING: Subroutine does not return */
  FUN_0068d4ec(&local_11,param_1);
}

