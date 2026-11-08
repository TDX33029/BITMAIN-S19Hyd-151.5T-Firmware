// FUN_0155fac8 @ 0155fac8 size=232 calls_out=3 calls_in=0
// strings: 

int FUN_0155fac8(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                )

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = 0;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    iVar3 = *param_1;
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
      do {
        uVar6 = FUN_01a41998(local_58);
        iVar2 = (int)uVar6;
        if (iVar2 == 0) {
          return 0;
        }
        uVar5 = *(undefined4 *)(iVar2 + 8);
        uVar4 = *(undefined4 *)(iVar2 + 4);
        cVar1 = FUN_0155ff74(iVar3 + 8,uVar4,uVar5);
      } while (cVar1 == '\0');
      local_34 = 0x80000000;
      local_30 = uVar4;
      uStack_2c = uVar5;
      uStack_28 = param_3;
      iVar2 = FUN_015776f4(param_1 + 1,(int)((ulonglong)uVar6 >> 0x20),&local_34,param_4,param_5);
    } while (iVar2 == 0);
  }
  return iVar2;
}

