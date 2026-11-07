// FUN_017fa814 @ 017fa814 size=1532 calls_out=4 calls_in=0
// strings: Headers | stream_id | flags | stream_dep | PushPromise | stream_id

void FUN_017fa814(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  code *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 local_1c;
  
  iVar5 = (int)register0x00000054 + -0x18;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    FUN_017fa724(param_1 + 8);
    return;
  case 1:
    (**(code **)(param_2[1] + 0xc))(*param_2,"Headers",7);
    uVar1 = FUN_01302c38(iVar5,"stream_id",9,param_1 + 0xb0,FUN_00b1c384);
    FUN_01302c38(uVar1,"flags",5,param_1 + 0xb4,FUN_013b0cb4);
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_01302c38(iVar5,&DAT_00570770,8,param_1 + 0x8c,&LAB_013b5650);
    }
    if (param_1[0xad] != '\x02') {
      FUN_01302c38(iVar5,"stream_dep",10,param_1 + 0xa8,FUN_013b0ebc);
    }
    FUN_01302e1c(iVar5);
    return;
  case 2:
    pcVar4 = &DAT_00570c08;
    pcVar3 = FUN_0172820c;
    pcVar8 = "dependency";
    uVar1 = 8;
    break;
  case 3:
    (**(code **)(param_2[1] + 0xc))(*param_2,"PushPromise",0xb);
    uVar1 = FUN_01302c38(iVar5,"stream_id",9,param_1 + 0xa8,FUN_00b1c384);
    uVar1 = FUN_01302c38(uVar1,
                         "promised_idInvalidRepresentationInvalidIntegerPrefixInvalidTableIndexInvalidHuffmanCodeInvalidPseudoheaderInvalidMaxDynamicSizeIntegerOverflow"
                         ,0xb,param_1 + 0xac,FUN_00b1c384);
    FUN_01302c38(uVar1,"flags",5,param_1 + 0xb0,FUN_013b1028);
    FUN_01302e1c();
    return;
  case 4:
    (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00570b40,8);
    local_1c = param_2;
    FUN_01302c38(&local_1c,"flags",5,param_1 + 0x3c,FUN_013b845c);
    if (*(int *)(param_1 + 4) == 1) {
      FUN_01302c38(&local_1c,"header_table_size",0x11,(int)register0x00000054 + -0x14,&LAB_01a86300)
      ;
    }
    if (*(int *)(param_1 + 0xc) == 1) {
      FUN_01302c38(&local_1c,"enable_push",0xb,(int)register0x00000054 + -0x14,&LAB_01a86300);
    }
    if (*(int *)(param_1 + 0x14) == 1) {
      FUN_01302c38(&local_1c,"max_concurrent_streams",0x16,(int)register0x00000054 + -0x14,
                   &LAB_01a86300);
    }
    if (*(int *)(param_1 + 0x1c) == 1) {
      FUN_01302c38(&local_1c,"initial_window_size",0x13,(int)register0x00000054 + -0x14,
                   &LAB_01a86300);
    }
    if (*(int *)(param_1 + 0x24) == 1) {
      FUN_01302c38(&local_1c,"max_frame_size",0xe,(int)register0x00000054 + -0x14,&LAB_01a86300);
    }
    if (*(int *)(param_1 + 0x2c) == 1) {
      FUN_01302c38(&local_1c,"max_header_list_size",0x14,(int)register0x00000054 + -0x14,
                   &LAB_01a86300);
    }
    if (*(int *)(param_1 + 0x34) == 1) {
      FUN_01302c38(&local_1c,"enable_connect_protocol",0x17,(int)register0x00000054 + -0x14,
                   &LAB_01a86300);
    }
    FUN_01302e1c(&local_1c);
    return;
  case 5:
    local_1c = (undefined4 *)(param_1 + 2);
    param_1 = param_1 + 1;
    pcVar4 = "PingX\x04";
    uVar6 = 3;
    pcVar7 = (code *)&LAB_01a705e0;
    pcVar8 = &DAT_00532588;
    uVar9 = 7;
    pcVar2 = "ack";
    pcVar3 = (code *)&LAB_013bc590;
    uVar1 = 4;
    goto LAB_017faa20;
  case 6:
    (**(code **)(param_2[1] + 0xc))(*param_2,"GoAway",6);
    uVar1 = FUN_01302c38(iVar5,"error_codeRemote",10,param_1 + 0x18,FUN_013b240c);
    FUN_01302c38(uVar1,"last_stream_id",0xe,param_1 + 0x14,FUN_00b1c384);
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_01302c38(iVar5,"debug_data",10,param_1 + 4,&LAB_012833c0);
    }
    FUN_01302e1c(iVar5);
    return;
  case 7:
    local_1c = (undefined4 *)(param_1 + 8);
    param_1 = param_1 + 4;
    pcVar4 = "WindowUpdate";
    uVar6 = 9;
    pcVar7 = FUN_00b1c384;
    pcVar8 = "size_increment";
    uVar9 = 0xe;
    pcVar2 = "stream_id";
    pcVar3 = FUN_015fc038;
    uVar1 = 0xc;
    goto LAB_017faa20;
  case 8:
    pcVar4 = "Reset";
    uVar1 = 5;
    pcVar8 = "error_codeRemote";
    pcVar3 = (code *)&LAB_013b2404;
  }
  local_1c = (undefined4 *)(param_1 + 8);
  uVar9 = 10;
  pcVar7 = FUN_00b1c384;
  param_1 = param_1 + 4;
  uVar6 = 9;
  pcVar2 = "stream_id";
LAB_017faa20:
  FUN_01303d90(param_2,pcVar4,uVar1,pcVar2,uVar6,param_1,pcVar7,pcVar8,uVar9,&local_1c,pcVar3);
  return;
}

