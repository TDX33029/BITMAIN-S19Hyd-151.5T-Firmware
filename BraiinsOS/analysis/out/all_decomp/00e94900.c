// FUN_00e94900 @ 00e94900 size=360 calls_out=5 calls_in=3
// strings: overflow deserializing SystemTime epoch offsetan array of length 16 | overflow deserializing SystemTime

void FUN_00e94900(uint *param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 *local_2c;
  uint local_28;
  uint local_24;
  undefined1 uStack_19;
  
  local_34 = 1;
  local_38 = param_2;
  FUN_00efbe38(&local_30);
  if (local_30 == 0) {
    FUN_00efeb8c(&local_30,&local_38);
    if (local_30 != 2) {
      if ((local_30 & 1) == 0) {
        uVar2 = FUN_00e94830(1,&uStack_19,&DAT_0187aa2c);
        *param_1 = uVar2;
        param_1[2] = (uint)&DAT_3b9aca00;
        return;
      }
      uVar2 = (uint)((ulonglong)((uint)local_2c >> 9) * 0x44b83 >> 0x20);
      bVar5 = CARRY4(local_28,uVar2 >> 7);
      iVar4 = local_24 + bVar5;
      if (CARRY4(local_24,(uint)bVar5)) {
        uVar3 = 0x2e;
        pcVar1 = "overflow deserializing SystemTime epoch offsetan array of length 16";
      }
      else {
        if ((undefined1 *)0x3b9ac9ff < local_2c) {
          uVar2 = uVar2 >> 7;
          bVar6 = CARRY4(local_28,uVar2);
          local_28 = local_28 + uVar2;
          bVar5 = CARRY4(local_24,(uint)bVar6);
          local_24 = local_24 + bVar6;
          if (bVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0,iVar4);
          }
          local_2c = local_2c + uVar2 * -1000000000;
          if (local_2c == &DAT_3b9aca00) {
            *param_1 = local_28;
            param_1[2] = (uint)&DAT_3b9aca00;
            return;
          }
        }
        if (-1 < (int)local_24) {
          *param_1 = local_28;
          param_1[1] = local_24;
          param_1[2] = (uint)local_2c;
          return;
        }
        uVar3 = 0x21;
        pcVar1 = "overflow deserializing SystemTime";
      }
      uVar2 = FUN_00e94a7c(pcVar1,uVar3);
      *param_1 = uVar2;
      param_1[2] = (uint)&DAT_3b9aca00;
      return;
    }
  }
  *param_1 = (uint)local_2c;
  param_1[2] = (uint)&DAT_3b9aca00;
  return;
}

