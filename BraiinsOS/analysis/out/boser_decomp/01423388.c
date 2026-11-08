// FUN_01423388 @ 01423388 size=380 calls_out=6 calls_in=5
// strings: cannot clone `Sender` -- too many outstanding senders

void FUN_01423388(int *param_1,char param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_3c [4];
  char local_38;
  int *local_34;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_2 == '\x02') {
    local_2c = 2;
    local_30 = (undefined4 *)0x2;
  }
  else {
    uVar5 = param_1[8];
    puVar3 = (uint *)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      if (uVar5 == (param_1[6] ^ 0x7fffffffU)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("cannot clone `Sender` -- too many outstanding senders",0x35,&DAT_01d2df0c);
      }
      uVar6 = *puVar3;
      if (uVar6 == uVar5) {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar3);
          if (bVar2) {
            *puVar3 = uVar5 + 1;
            bVar2 = true;
            uVar5 = uVar6;
            goto LAB_0142340c;
          }
          uVar6 = *puVar3;
        } while (uVar6 == uVar5);
      }
      bVar2 = false;
      ClearExclusiveLocal();
      uVar5 = uVar6;
LAB_0142340c:
      DataMemoryBarrier(0xb);
    } while (!bVar2);
    do {
      iVar4 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1423504);
      (*pcVar1)();
    }
    local_30 = (undefined4 *)thunk_FUN_01be5118(0x1c);
    if (local_30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x1c);
    }
    local_2c = 0;
    local_30[6] = 0;
    *local_30 = 1;
    local_30[1] = 1;
    local_30[2] = 0;
    local_30[3] = 0;
    local_30[4] = 0;
  }
  local_28 = 0;
  local_34 = param_1;
  local_24 = param_3;
  FUN_01421f84(&local_48,&local_34,&local_28);
  if (local_38 != '\x02') {
    if (local_48 == 0) {
      FUN_009d5b2c(&local_44);
    }
    else {
      (**(code **)(local_48 + 0x10))(auStack_3c,local_44,local_40);
    }
  }
  FUN_01423570(&local_34);
  return;
}

