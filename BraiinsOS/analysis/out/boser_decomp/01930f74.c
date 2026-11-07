// FUN_01930f74 @ 01930f74 size=336 calls_out=2 calls_in=25
// strings: 

void FUN_01930f74(char *param_1,byte *param_2,undefined4 param_3)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char local_1c;
  undefined2 local_1b;
  char local_19;
  uint local_18;
  undefined4 local_14;
  
  cVar3 = '\x03';
  if (0x17 < *param_2) {
    cVar3 = *param_2 - 0x18;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar3) {
  case '\0':
    uVar6 = FUN_0192fac8(param_3,1);
    if (((byte *)uVar6 != (byte *)0x0) && ((int)((ulonglong)uVar6 >> 0x20) == 1)) {
      local_18 = (uint)*(byte *)uVar6;
      if (local_18 == 0) {
LAB_01931008:
        uVar4 = *(undefined4 *)(param_2 + 8);
        uVar5 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_1 + 4) = uVar4;
        *(undefined4 *)(param_1 + 8) = uVar5;
        return;
      }
      goto LAB_01931070;
    }
    uVar4 = 2;
    pcVar2 = &DAT_005239af;
    goto LAB_0193109c;
  case '\x01':
    uVar6 = FUN_0192fac8(param_3,2);
    if (((ushort *)uVar6 == (ushort *)0x0) || ((int)((ulonglong)uVar6 >> 0x20) != 2)) {
LAB_01931080:
      uVar4 = 3;
      pcVar2 = "u16";
LAB_0193109c:
      *param_1 = '\f';
      *(char **)(param_1 + 4) = pcVar2;
      *(undefined4 *)(param_1 + 8) = uVar4;
      return;
    }
    uVar1 = (uint)*(ushort *)uVar6;
    break;
  case '\x02':
    uVar6 = FUN_0192fac8(param_3,2);
    if (((ushort *)uVar6 == (ushort *)0x0) || ((int)((ulonglong)uVar6 >> 0x20) != 2))
    goto LAB_01931080;
    uVar1 = (uint)*(ushort *)uVar6;
    if (uVar1 == 0) goto LAB_01931008;
    break;
  case '\x03':
    FUN_019310dc(&local_1c,param_3);
    if (local_1c != '\x18') {
      param_1[3] = local_19;
      *(undefined2 *)(param_1 + 1) = local_1b;
      *(uint *)(param_1 + 4) = local_18;
      *(undefined4 *)(param_1 + 8) = local_14;
      *param_1 = local_1c;
      return;
    }
    if (*(uint *)(param_2 + 0xc) < local_18) {
      uVar4 = *(undefined4 *)(param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)(param_1 + 4) = uVar4;
      *(undefined4 *)(param_1 + 8) = uVar5;
      return;
    }
    goto LAB_01931070;
  }
  local_18 = (uVar1 & 0xff) << 8 | uVar1 >> 8;
LAB_01931070:
  *(uint *)(param_1 + 4) = local_18;
  *param_1 = '\x18';
  return;
}

