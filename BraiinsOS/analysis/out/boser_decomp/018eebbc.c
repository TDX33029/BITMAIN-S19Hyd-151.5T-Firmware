// FUN_018eebbc @ 018eebbc size=352 calls_out=5 calls_in=1
// strings: 

void FUN_018eebbc(undefined4 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_100 [108];
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_25;
  
  uVar6 = *(undefined4 *)(param_2 + 2);
  FUN_01891fc4(&local_94,uVar6,&uStack_25,&DAT_01d23c58);
  iVar3 = local_94;
  if (local_94 == 0) {
    uVar6 = 0x80000022;
  }
  else {
    FUN_018906c4(&local_94);
    if (local_94 == 1) {
      uVar6 = 0x80000022;
    }
    else {
      FUN_01bed4e2(auStack_100,&local_90,0x68);
      uVar5 = *(undefined4 *)(param_2 + 4);
      uVar1 = param_2[1];
      uVar2 = *param_2;
      puVar4 = (undefined2 *)thunk_FUN_01be5118(0xb0);
      if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xb0);
      }
      puVar4[1] = uVar1;
      *puVar4 = uVar2;
      *(undefined4 *)(puVar4 + 2) = uVar6;
      *(int *)(puVar4 + 4) = iVar3;
      *(undefined4 *)(puVar4 + 6) = local_90;
      *(undefined4 *)(puVar4 + 8) = uStack_8c;
      *(undefined4 *)(puVar4 + 10) = uStack_88;
      *(undefined4 *)(puVar4 + 0xc) = uStack_84;
      *(undefined4 *)(puVar4 + 0xe) = local_80;
      *(undefined4 *)(puVar4 + 0x10) = uStack_7c;
      *(undefined4 *)(puVar4 + 0x12) = uStack_78;
      *(undefined4 *)(puVar4 + 0x14) = uStack_74;
      *(undefined4 *)(puVar4 + 0x16) = local_70;
      *(undefined4 *)(puVar4 + 0x18) = uStack_6c;
      *(undefined4 *)(puVar4 + 0x1a) = uStack_68;
      *(undefined4 *)(puVar4 + 0x1c) = uStack_64;
      *(undefined4 *)(puVar4 + 0x1e) = uStack_60;
      *(undefined4 *)(puVar4 + 0x20) = uStack_60;
      FUN_01bed4e2(puVar4 + 0x22,auStack_100,0x68);
      uVar6 = 0x80000029;
      *(undefined4 *)(puVar4 + 0x56) = uVar5;
      param_1[1] = puVar4;
      param_1[2] = &DAT_01d23db0;
    }
  }
  *param_1 = uVar6;
  return;
}

