// FUN_0197b868 @ 0197b868 size=380 calls_out=3 calls_in=0
// strings: 

byte FUN_0197b868(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  char local_61;
  int local_60 [2];
  char *local_58;
  char *local_54;
  char *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  byte *local_40;
  int *local_3c;
  uint local_30 [3];
  
  local_54 = (char *)*param_1;
  if ((*local_54 != '\0') || (bVar1 = 0, *(uint *)param_1[1] < 0x65)) {
    pbVar6 = (byte *)param_1[2];
    iVar7 = param_1[3];
    pcVar3 = (char *)param_1[4];
    iVar4 = *param_2;
    uVar5 = param_2[1];
    local_58 = &local_61;
    local_4c = param_1[5];
    local_48 = param_1[6];
    local_61 = '\0';
    uVar2 = uVar5;
    local_50 = pcVar3;
    local_44 = iVar7;
    local_40 = pbVar6;
    local_3c = param_2;
    if (iVar4 == 0) {
      local_30[0] = 0;
      FUN_01be0690(uVar5,0,0xf,0,local_30);
      uVar2 = local_30[0] & 0xfffffffe;
    }
    if (uVar2 != 0) {
      uVar2 = uVar2 - 1;
    }
    FUN_0197b9fc(uVar2,&local_58,&DAT_01d27608);
    if ((local_61 == '\0') && (*pcVar3 != '\0')) {
      local_60[1] = 0;
      local_60[0] = iVar7;
      if (iVar4 == 0) {
        local_58 = (char *)0x0;
        FUN_01be0690(uVar5,0,0xf,0,&local_58);
        uVar5 = (uint)local_58 & 0xfffffffe;
      }
      local_58 = (char *)0x3;
      local_30[0] = 2;
      bVar1 = FUN_0197f9fc(local_60,uVar5,&local_58,local_30,0);
      *pbVar6 = bVar1;
      *(int *)(local_60[0] + 0xc) = *(int *)(local_60[0] + 0xc) + 1;
    }
    *(int *)param_1[1] = *(int *)param_1[1] + 1;
    bVar1 = *pbVar6 ^ 1;
  }
  return bVar1 & 1;
}

