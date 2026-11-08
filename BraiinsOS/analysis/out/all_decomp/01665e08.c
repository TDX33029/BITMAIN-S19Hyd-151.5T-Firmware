// FUN_01665e08 @ 01665e08 size=604 calls_out=8 calls_in=1
// strings: Unable to decode input as UTF8

void FUN_01665e08(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  FUN_01666080(&local_48);
  iVar5 = local_44;
  if (local_48 == -0x80000000) {
    iVar4 = param_3[1];
    iVar6 = -0x80000000;
    *param_2 = 0;
    if ((iVar4 != 0) && ((iVar4 != 1 || (*(char *)*param_3 != '\r')))) {
      FUN_00f5f8dc(&local_48,param_3);
      if (local_44 == 0) {
        local_44 = 0;
      }
      else if (*(char *)(local_48 + local_44 + -1) == '\r') {
        local_44 = local_44 + -1;
      }
      FUN_00fab1e0(&local_2c,local_48,local_44);
      if (local_2c == 1) {
        FUN_015e79d4(&local_34,0x15,"Unable to decode input as UTF8",0x1e);
        *param_1 = -0x7fffffff;
        param_1[1] = local_34;
        param_1[2] = local_30;
        if (((uint)local_3c & 1) == 0) {
          piVar3 = local_3c + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar5 + -1;
          if (iVar5 != 1) {
            return;
          }
          DataMemoryBarrier(0xb);
          if (*local_3c != 0) {
            thunk_FUN_016d3fb4(local_3c[1]);
            thunk_FUN_016d3fb4(local_3c);
            return;
          }
        }
        else {
          if (local_40 + ((uint)local_3c >> 5) == 0) {
            return;
          }
          local_3c = (int *)(local_48 - ((uint)local_3c >> 5));
        }
        thunk_FUN_016d3fb4(local_3c);
        return;
      }
      if (local_24 < 0) {
        uVar2 = 0;
LAB_01665f34:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,local_24);
      }
      if (local_24 == 0) {
        iVar5 = 1;
        iVar6 = 0;
      }
      else {
        iVar5 = thunk_FUN_016d4a50(local_24);
        if (iVar5 == 0) {
          uVar2 = 1;
          goto LAB_01665f34;
        }
        iVar6 = local_24;
      }
      FUN_016dd1aa(iVar5,local_28,local_24);
      if (((uint)local_3c & 1) == 0) {
        piVar3 = local_3c + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
        local_40 = local_24;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          if (*local_3c != 0) {
            thunk_FUN_016d3fb4(local_3c[1]);
          }
          goto LAB_01666048;
        }
      }
      else {
        iVar4 = local_40 + ((uint)local_3c >> 5);
        local_40 = local_24;
        if (iVar4 != 0) {
          local_3c = (int *)(local_48 - ((uint)local_3c >> 5));
LAB_01666048:
          thunk_FUN_016d3fb4(local_3c);
          local_40 = local_24;
        }
      }
    }
  }
  else {
    iVar6 = local_48;
    if (local_48 == -0x7fffffff) {
      *param_1 = -0x7fffffff;
      goto LAB_01666050;
    }
  }
  *param_1 = iVar6;
LAB_01666050:
  param_1[1] = iVar5;
  param_1[2] = local_40;
  return;
}

