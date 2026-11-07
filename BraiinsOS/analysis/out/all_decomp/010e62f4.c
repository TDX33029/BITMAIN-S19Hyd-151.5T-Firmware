// FUN_010e62f4 @ 010e62f4 size=560 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_010e62f4(char param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_3e;
  char local_3d;
  undefined1 auStack_3c [12];
  char *local_30;
  code *local_2c;
  char *local_28;
  code *local_24;
  
  local_3e = 2;
  local_3d = param_1;
  if (param_1 != '\x02') {
    local_28 = &local_3e;
    local_30 = &local_3d;
    local_24 = FUN_010e62b8;
    local_2c = FUN_010e62b8;
    FUN_00600d2c(auStack_3c,&DAT_00583633,&local_30);
    local_2c = (code *)FUN_010e9978(auStack_3c);
    goto LAB_010e6338;
  }
  piVar6 = (int *)*param_3;
  FUN_010e45d8(&local_30,piVar6);
  if (local_30 == (char *)0x1) goto LAB_010e6338;
  pcVar4 = (char *)piVar6[1];
  if ((uint)(local_28 <= pcVar4) <= (uint)-(int)local_24) {
    local_2c = (code *)FUN_010e98c8(&DAT_005649b0,0x10);
    goto LAB_010e6338;
  }
  uVar1 = 0;
  pcVar3 = pcVar4;
  if (local_28 < pcVar4) {
    pcVar3 = local_28;
  }
  param_2[2] = 0;
  if ((char *)*param_2 < pcVar3) {
    FUN_010e555c(param_2,0,pcVar3,1,1);
    pcVar4 = (char *)piVar6[1];
    uVar1 = param_2[2];
    pcVar3 = pcVar4;
    if (local_28 < pcVar4) {
      pcVar3 = local_28;
    }
    if ((char *)(*param_2 - uVar1) < pcVar3) goto LAB_010e64f8;
  }
  else if ((char *)*param_2 < pcVar3) {
LAB_010e64f8:
    FUN_010e555c(param_2,uVar1,pcVar3,1,1);
    pcVar4 = (char *)piVar6[1];
  }
  pcVar3 = local_28;
  if (local_28 < pcVar4) {
    pcVar4 = local_28;
  }
  while (pcVar4 != (char *)0x0) {
    uVar1 = param_2[2];
    iVar5 = *piVar6;
    if ((char *)(*param_2 - uVar1) < pcVar4) {
      FUN_010e555c(param_2,uVar1,pcVar4,1,1);
      uVar1 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + uVar1,iVar5,pcVar4);
    local_2c = (code *)piVar6[1];
    param_2[2] = (uint)(pcVar4 + uVar1);
    if (local_2c < pcVar4) {
      local_30 = pcVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_30);
    }
    pcVar2 = (char *)(local_2c + -(int)pcVar4);
    pcVar3 = pcVar3 + -(int)pcVar4;
    *piVar6 = (int)(pcVar4 + *piVar6);
    piVar6[1] = (int)pcVar2;
    pcVar4 = pcVar2;
    if (pcVar3 < pcVar2) {
      pcVar4 = pcVar3;
    }
  }
  FUN_00fab1e0(&local_30,param_2[1],param_2[2]);
  if (local_30 != (char *)0x1) {
    return 0;
  }
  local_2c = (code *)FUN_010e98c8(&DAT_00387fa5,0x2f);
LAB_010e6338:
  param_2[2] = 0;
  return local_2c;
}

