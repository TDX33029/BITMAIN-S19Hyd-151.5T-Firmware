// FUN_01561770 @ 01561770 size=228 calls_out=4 calls_in=0
// strings: 

bool FUN_01561770(int *param_1,char *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  char local_30;
  
  bVar1 = true;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    iVar4 = *param_1;
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    local_58[0] = (uint)(local_58[2] != 0);
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
    do {
      while( true ) {
        uVar5 = FUN_01a41998(local_58);
        iVar2 = (int)uVar5;
        if (iVar2 == 0) goto LAB_01561844;
        FUN_01338048(&local_34,iVar4 + 8,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        if (local_34 == 0x12) break;
        FUN_0150174c(&local_34);
      }
    } while ((local_30 == '\0') ||
            (iVar3 = FUN_01577618(param_1 + 1,(int)((ulonglong)uVar5 >> 0x20),param_3), iVar3 != 0))
    ;
LAB_01561844:
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

