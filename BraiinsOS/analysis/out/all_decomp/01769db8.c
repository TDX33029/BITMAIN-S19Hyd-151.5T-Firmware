// FUN_01769db8 @ 01769db8 size=764 calls_out=6 calls_in=3
// strings: 

undefined8
FUN_01769db8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,int param_8,int param_9,uint param_10)

{
  code *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 auStack_570 [804];
  undefined1 auStack_24c [136];
  undefined1 auStack_1c4 [136];
  undefined1 auStack_13c [136];
  undefined1 auStack_b4 [136];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  FUN_016dd606(auStack_570,0,800);
  FUN_017544e0(auStack_570,param_1,param_2,param_3,param_4,param_5,0x88,0x1f);
  iVar3 = (param_10 / 0x88) * 0x88;
  FUN_01754554(auStack_570,param_6,param_7,param_8,param_9,param_10 / 0x88,0x88);
  uVar4 = param_10 % 0x88;
  if (uVar4 == 0) {
LAB_01769eb8:
    FUN_0177aaa0(auStack_24c,0x88);
    FUN_0177aaa0(auStack_1c4,0x88);
    FUN_0177aaa0(auStack_13c,0x88);
    FUN_0177aaa0(auStack_b4,0x88);
    FUN_0177aaa0(auStack_570,800);
    if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 1;
  }
  puVar5 = (undefined1 *)(param_6 + iVar3);
  FUN_01754554(auStack_570,auStack_24c,auStack_1c4,auStack_13c,auStack_b4,1,0x88);
  if (((auStack_24c <= puVar5) || ((undefined1 *)(param_6 + param_10) <= auStack_24c)) &&
     ((puVar5 <= auStack_24c || (auStack_24c + uVar4 <= puVar5)))) {
    puVar2 = (undefined1 *)(param_7 + iVar3);
    FUN_016dd1aa(puVar5,auStack_24c,uVar4);
    if (((auStack_1c4 <= puVar2) || ((undefined1 *)(param_7 + param_10) <= auStack_1c4)) &&
       ((puVar2 <= auStack_1c4 || (auStack_1c4 + uVar4 <= puVar2)))) {
      puVar5 = (undefined1 *)(param_8 + iVar3);
      FUN_016dd1aa(puVar2,auStack_1c4,uVar4);
      if (((auStack_13c <= puVar5) || ((undefined1 *)(param_8 + param_10) <= auStack_13c)) &&
         ((puVar5 <= auStack_13c || (auStack_13c + uVar4 <= puVar5)))) {
        puVar2 = (undefined1 *)(param_9 + iVar3);
        FUN_016dd1aa(puVar5,auStack_13c,uVar4);
        if (((auStack_b4 <= puVar2) || ((undefined1 *)(param_9 + param_10) <= auStack_b4)) &&
           ((puVar2 <= auStack_b4 || (auStack_b4 + uVar4 <= puVar2)))) {
          FUN_016dd1aa(puVar2,auStack_b4,uVar4);
          goto LAB_01769eb8;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x176a0b0);
  (*pcVar1)();
}

