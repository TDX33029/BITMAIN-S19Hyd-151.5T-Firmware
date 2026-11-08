// FUN_014c3e78 @ 014c3e78 size=472 calls_out=1 calls_in=1
// strings: 

void FUN_014c3e78(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_c98 [228];
  undefined1 auStack_bb4 [228];
  undefined1 auStack_ad0 [228];
  undefined1 auStack_9ec [228];
  undefined1 auStack_908 [228];
  undefined1 auStack_824 [228];
  undefined1 auStack_740 [228];
  undefined1 auStack_65c [228];
  undefined1 auStack_578 [228];
  undefined1 auStack_494 [228];
  undefined1 auStack_3b0 [228];
  undefined1 auStack_2cc [228];
  undefined1 auStack_1e8 [228];
  undefined1 auStack_104 [228];
  
  uVar2 = param_2[0x398];
  uVar3 = param_2[0x399];
  uVar4 = param_2[0x39a];
  param_1[0x442] = param_2[0x397];
  param_1[0x443] = uVar2;
  param_1[0x444] = uVar3;
  param_1[0x445] = uVar4;
  uVar4 = param_2[0x39b];
  uVar1 = *(undefined1 *)(param_2 + 0x39c);
  uVar2 = param_2[0x395];
  uVar3 = param_2[0x396];
  param_1[0x43f] = param_2[0x394];
  param_1[0x440] = uVar2;
  param_1[0x441] = uVar3;
  FUN_01bed4e2(auStack_c98,param_2 + 4,0xe4);
  FUN_01bed4e2(auStack_bb4,param_2 + 0x3d,0xe4);
  FUN_01bed4e2(auStack_ad0,param_2 + 0x76,0xe4);
  FUN_01bed4e2(auStack_9ec,param_2 + 0xaf,0xe4);
  FUN_01bed4e2(auStack_908,param_2 + 0xe8,0xe4);
  FUN_01bed4e2(auStack_824,param_2 + 0x121,0xe4);
  FUN_01bed4e2(auStack_740,param_2 + 0x15a,0xe4);
  FUN_01bed4e2(auStack_65c,param_2 + 0x193,0xe4);
  FUN_01bed4e2(auStack_578,param_2 + 0x1cc,0xe4);
  FUN_01bed4e2(auStack_494,param_2 + 0x205,0xe4);
  FUN_01bed4e2(auStack_3b0,param_2 + 0x23e,0xe4);
  FUN_01bed4e2(auStack_2cc,param_2 + 0x277,0xe4);
  FUN_01bed4e2(auStack_1e8,param_2 + 0x2b0,0xe4);
  FUN_01bed4e2(auStack_104,param_2 + 0x2e9,0xe4);
  FUN_01bed4e2(param_1 + 0x394,param_2 + 0x322,0xe4);
  FUN_01bed4e2(param_1 + 0x3cd,param_2 + 0x35b,0xe4);
  *(undefined1 *)((int)param_1 + 0x111d) = 0;
  *(undefined1 *)(param_1 + 0x447) = uVar1;
  param_1[0x446] = uVar4;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_01bed4e2(param_1 + 4,auStack_c98,0xc78);
  param_1[0x406] = 3;
  param_1[0x35b] = 3;
  param_1[0x322] = 3;
  return;
}

