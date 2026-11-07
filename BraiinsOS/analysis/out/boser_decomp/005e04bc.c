// FUN_005e04bc @ 005e04bc size=356 calls_out=5 calls_in=0
// strings: grpc-status | grpc-status | application/grpc

void FUN_005e04bc(undefined4 param_1,char *param_2)

{
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined4 local_68;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  char local_4c;
  undefined **local_48;
  char *pcStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **ppuStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\0') {
    local_6c = 200;
    local_ac = 0;
    local_b0 = 0;
    local_68 = 0;
    local_6a = 2;
    local_70 = 0;
    local_78 = 0;
    local_7c = 0;
    local_80 = 4;
    local_84 = 0;
    local_88 = 0;
    local_8c = 4;
    local_90 = 0;
    local_94 = 0;
    local_98 = 2;
    local_48 = &PTR_FUN_01c02358;
    pcStack_44 = "grpc-status";
    uStack_40 = 0xb;
    uStack_3c = 0;
    FUN_014148c4(&ppuStack_38);
    FUN_00714c58(&local_5c,&local_b0,&local_48,&ppuStack_38);
    if (local_4c != '\x02') {
      (**(code **)(local_5c + 0x10))(auStack_50,uStack_58,uStack_54);
    }
    local_48 = (undefined **)0x0;
    pcStack_44 = (char *)0x1d;
    uStack_40 = 0;
    uStack_3c = 0;
    ppuStack_38 = &PTR_FUN_01c02358;
    pcStack_34 = "application/grpc";
    uStack_30 = 0x10;
    uStack_2c = 0;
    uStack_28 = 0;
    FUN_00714c58(&local_5c,&local_b0,&local_48,&ppuStack_38);
    if (local_4c != '\x02') {
      (**(code **)(local_5c + 0x10))(auStack_50,uStack_58,uStack_54);
    }
    FUN_01bed4e2(param_1,&local_b0,0x50);
    *param_2 = '\x01';
    return;
  }
  if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c02394);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c02394);
}

