// FUN_010ca624 @ 010ca624 size=404 calls_out=6 calls_in=2
// strings: 

void FUN_010ca624(char *param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 auStack_b0 [48];
  char local_80;
  char local_7f;
  char local_7e;
  int local_68;
  char local_64;
  undefined1 uStack_63;
  undefined2 uStack_62;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 local_5a;
  undefined2 local_56;
  int local_54;
  char local_50;
  undefined1 local_4f;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined2 local_42;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  
  cVar1 = *param_2;
  cVar2 = param_2[1];
  cVar3 = param_2[2];
  FUN_016dd1aa(auStack_b0,param_2 + 3,0x29);
  if (cVar1 == '\x04') {
    cVar1 = '\x04';
    local_50 = cVar3;
  }
  else {
    FUN_016dd1aa((uint)&local_80 | 3,param_2 + 3,0x29);
    local_80 = cVar1;
    local_7f = cVar2;
    local_7e = cVar3;
    local_2c = (undefined1 *)thunk_FUN_016d4a50(1);
    if (local_2c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,1);
    }
    *local_2c = *param_3;
    local_30 = 1;
    local_28 = 1;
    FUN_00f5ef18(&local_40,&local_30);
    FUN_010a5eb0(&local_54,&local_40);
    if (local_54 == 0) {
      FUN_010ca53c(&local_80);
      cVar1 = '\x04';
      cVar2 = '\x02';
    }
    else {
      local_34 = local_42;
      local_38 = local_46;
      local_3c = local_4a;
      local_40 = local_4e;
      if (local_68 != 0) {
        (**(code **)(local_68 + 0x10))
                  (&uStack_5c,CONCAT22(uStack_62,CONCAT11(uStack_63,local_64)),
                   CONCAT22(uStack_5e,local_60));
        cVar2 = local_7f;
        cVar3 = local_7e;
        cVar1 = local_80;
      }
      uStack_63 = local_4f;
      uStack_5e = (undefined2)local_3c;
      uStack_5c = (undefined2)((uint)local_3c >> 0x10);
      uStack_62 = (undefined2)local_40;
      local_60 = (undefined2)((uint)local_40 >> 0x10);
      local_5a = local_38;
      local_64 = local_50;
      local_68 = local_54;
      local_56 = local_34;
      FUN_016dd1aa(auStack_b0,(uint)&local_80 | 3,0x29);
      local_50 = cVar3;
    }
  }
  param_1[2] = local_50;
  param_1[1] = cVar2;
  *param_1 = cVar1;
  FUN_016dd1aa(param_1 + 3,auStack_b0,0x29);
  return;
}

