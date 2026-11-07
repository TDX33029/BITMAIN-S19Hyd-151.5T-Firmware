// FUN_0155fa00 @ 0155fa00 size=200 calls_out=3 calls_in=0
// strings: 

bool FUN_0155fa00(int *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_44 [3];
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  bVar2 = true;
  if (*param_2 == '\x05') {
    local_44[2] = *(uint *)(param_2 + 4);
    local_38 = *(undefined4 *)(param_2 + 8);
    iVar5 = *param_1;
    local_24 = *(undefined4 *)(param_2 + 0xc);
    if (local_44[2] == 0) {
      local_24 = 0;
    }
    local_44[0] = (uint)(local_44[2] != 0);
    local_30 = 0;
    local_44[1] = 0;
    local_34 = local_44[0];
    local_2c = local_44[2];
    local_28 = local_38;
    do {
      uVar6 = FUN_01a41998(local_44);
      iVar3 = (int)uVar6;
      if (iVar3 == 0) break;
      cVar1 = FUN_0155ff74(iVar5 + 8,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
    } while ((cVar1 == '\0') ||
            (iVar4 = FUN_01577618(param_1 + 1,(int)((ulonglong)uVar6 >> 0x20),param_3), iVar4 != 0))
    ;
    bVar2 = iVar3 == 0;
  }
  return bVar2;
}

