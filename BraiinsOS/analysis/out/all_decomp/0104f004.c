// FUN_0104f004 @ 0104f004 size=128 calls_out=3 calls_in=3
// strings: 

int FUN_0104f004(undefined4 *param_1)

{
  int iVar1;
  undefined2 uStack_60;
  undefined2 local_5e;
  undefined2 uStack_5c;
  undefined2 local_5a;
  undefined2 uStack_58;
  undefined2 local_56;
  undefined2 uStack_54;
  undefined2 local_50;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined2 local_42;
  
  local_56 = (undefined2)param_1[2];
  uStack_54 = (undefined2)((uint)param_1[2] >> 0x10);
  local_5a = (undefined2)param_1[1];
  uStack_58 = (undefined2)((uint)param_1[1] >> 0x10);
  local_46 = CONCAT22(local_56,uStack_58);
  local_5e = (undefined2)*param_1;
  uStack_5c = (undefined2)((uint)*param_1 >> 0x10);
  local_4a = CONCAT22(local_5a,uStack_5c);
  local_4e = CONCAT22(local_5e,uStack_60);
  local_50 = 0x11;
  local_42 = uStack_54;
  iVar1 = thunk_FUN_016d4a50(0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  FUN_016dd1aa(iVar1,&local_50,0x44);
  return iVar1;
}

