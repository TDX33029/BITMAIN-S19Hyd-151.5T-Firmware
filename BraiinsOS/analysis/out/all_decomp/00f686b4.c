// FUN_00f686b4 @ 00f686b4 size=1220 calls_out=6 calls_in=1
// strings: /usr/share/lib/zoneinfo

void FUN_00f686b4(char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte local_4c [4];
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  
  if ((param_3 != 0) && (*param_2 == '/')) {
    local_38 = 0;
    local_2c = 0;
    local_34 = 0x1b6;
    local_30 = 1;
    FUN_015ec1bc(&local_44,&local_38,param_2,param_3);
    if ((char)local_44 == '\x04') {
      *(undefined4 *)param_1 = local_40;
      param_1[8] = '\x10';
      param_1[9] = -0x36;
      param_1[10] = -0x66;
      param_1[0xb] = ';';
      return;
    }
    *(undefined4 *)(param_1 + 4) = local_40;
    param_1[3] = local_44._3_1_;
    *(undefined2 *)(param_1 + 1) = local_44._1_2_;
    *param_1 = (char)local_44;
    param_1[8] = '\x06';
    param_1[9] = -0x36;
    param_1[10] = -0x66;
    param_1[0xb] = ';';
    return;
  }
  uVar3 = 0x13;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x13);
  if (puVar1 == (undefined4 *)0x0) {
LAB_00f68b6c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar3);
  }
  FUN_016dd1aa(puVar1,&DAT_0035d680,0x13);
  FUN_015ed628(&local_44,puVar1,0x13,param_2,param_3);
  uVar3 = local_40;
  local_38 = 0;
  local_2c = 0;
  local_34 = 0x1b6;
  local_30 = 1;
  FUN_015ec1bc(local_4c,&local_38,local_40,local_3c);
  if (local_44 != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  puVar5 = local_48;
  if (local_4c[0] != 4) {
    if (2 < local_4c[0]) {
      uVar3 = *local_48;
      puVar4 = (undefined4 *)local_48[1];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      thunk_FUN_016d3fb4(puVar5);
    }
    thunk_FUN_016d3fb4(puVar1);
    uVar3 = 0xf;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xf);
    if (puVar1 == (undefined4 *)0x0) goto LAB_00f68b6c;
    *(undefined4 *)((int)puVar1 + 0xb) = 0x6f666e69;
    puVar1[2] = 0x69656e6f;
    puVar1[1] = 0x7a2f6572;
    *puVar1 = 0x6168732f;
    FUN_015ed628(&local_44,puVar1,0xf,param_2,param_3);
    uVar3 = local_40;
    local_2c = 0;
    local_38 = 0;
    local_34 = 0x1b6;
    local_30 = 1;
    FUN_015ec1bc(local_4c,&local_38,local_40,local_3c);
    if (local_44 != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
    puVar5 = local_48;
    if (local_4c[0] != 4) {
      if (2 < local_4c[0]) {
        uVar3 = *local_48;
        puVar4 = (undefined4 *)local_48[1];
        pcVar2 = (code *)*puVar4;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar3);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_016d3fb4(uVar3);
        }
        thunk_FUN_016d3fb4(puVar5);
      }
      thunk_FUN_016d3fb4(puVar1);
      uVar3 = 0xd;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xd);
      if (puVar1 == (undefined4 *)0x0) goto LAB_00f68b6c;
      *(undefined1 *)(puVar1 + 3) = 0x6f;
      puVar1[2] = 0x666e6965;
      puVar1[1] = 0x6e6f7a2f;
      *puVar1 = 0x6374652f;
      FUN_015ed628(&local_44,puVar1,0xd,param_2,param_3);
      uVar3 = local_40;
      local_2c = 0;
      local_38 = 0;
      local_34 = 0x1b6;
      local_30 = 1;
      FUN_015ec1bc(local_4c,&local_38,local_40,local_3c);
      if (local_44 != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      puVar5 = local_48;
      if (local_4c[0] != 4) {
        if (2 < local_4c[0]) {
          uVar3 = *local_48;
          puVar4 = (undefined4 *)local_48[1];
          pcVar2 = (code *)*puVar4;
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(uVar3);
          }
          if (puVar4[1] != 0) {
            thunk_FUN_016d3fb4(uVar3);
          }
          thunk_FUN_016d3fb4(puVar5);
        }
        thunk_FUN_016d3fb4(puVar1);
        uVar3 = 0x17;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x17);
        if (puVar1 == (undefined4 *)0x0) goto LAB_00f68b6c;
        FUN_016dd1aa(puVar1,"/usr/share/lib/zoneinfo",0x17);
        FUN_015ed628(&local_44,puVar1,0x17,param_2,param_3);
        local_2c = 0;
        local_38 = 0;
        local_34 = 0x1b6;
        local_30 = 1;
        FUN_015ec1bc(local_4c,&local_38,local_40,local_3c);
        if (local_44 != 0) {
          thunk_FUN_016d3fb4(local_40);
        }
        if (local_4c[0] != 4) {
          if (2 < local_4c[0]) {
            uVar3 = *local_48;
            puVar5 = (undefined4 *)local_48[1];
            pcVar2 = (code *)*puVar5;
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(uVar3);
            }
            if (puVar5[1] != 0) {
              thunk_FUN_016d3fb4(uVar3);
            }
            thunk_FUN_016d3fb4(local_48);
          }
          thunk_FUN_016d3fb4(puVar1);
          param_1[8] = '\x06';
          param_1[9] = -0x36;
          param_1[10] = -0x66;
          param_1[0xb] = ';';
          param_1[0] = '\x01';
          param_1[1] = '\0';
          return;
        }
      }
    }
  }
  *(undefined4 **)param_1 = local_48;
  param_1[8] = '\x10';
  param_1[9] = -0x36;
  param_1[10] = -0x66;
  param_1[0xb] = ';';
  thunk_FUN_016d3fb4(puVar1);
  return;
}

