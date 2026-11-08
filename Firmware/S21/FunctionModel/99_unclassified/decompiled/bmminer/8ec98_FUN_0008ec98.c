// FUN_0008ec98 @ 0008ec98  size=1032  callers=0
// program: bmminer


undefined4 FUN_0008ec98(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_80 [48];
  uint local_50;
  int iStack_4c;
  size_t local_18;
  int local_14;
  
  iVar1 = FUN_0008bbbc(*(undefined4 *)(param_1 + 0x1878),param_2);
  if (iVar1 == 0) {
    local_14 = open64((char *)(param_1 + 0x1030),*(uint *)(param_1 + 0x102c) | 0x441,
                      *(undefined4 *)(param_1 + 0x1028));
    if (local_14 < 0) {
      piVar2 = __errno_location();
      FUN_00095b4c(2,"src/rule.c",0xae,"open file[%s] fail, errno[%d]",param_1 + 0x1030,*piVar2);
      uVar4 = 0xffffffff;
    }
    else {
      local_18 = *(int *)(*(int *)(param_2 + 0x1c) + 4) - **(int **)(param_2 + 0x1c);
      sVar3 = write(local_14,(void *)**(undefined4 **)(param_2 + 0x1c),local_18);
      if (sVar3 < 0) {
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/rule.c",0xb4,"write fail, errno[%d]",*piVar2);
        close(local_14);
        uVar4 = 0xffffffff;
      }
      else {
        if ((*(int *)(param_1 + 0x1868) != 0) &&
           (*(int *)(param_1 + 0x186c) = *(int *)(param_1 + 0x186c) + 1,
           *(uint *)(param_1 + 0x1868) <= *(uint *)(param_1 + 0x186c))) {
          *(undefined4 *)(param_1 + 0x186c) = 0;
          iVar1 = fsync(local_14);
          if (iVar1 != 0) {
            piVar2 = __errno_location();
            FUN_00095b4c(2,"src/rule.c",0xbb,"fsync[%d] fail, errno[%d]",local_14,*piVar2);
          }
        }
        iVar1 = close(local_14);
        if (iVar1 < 0) {
          piVar2 = __errno_location();
          FUN_00095b4c(2,"src/rule.c",0xbf,"close fail, maybe cause by write, errno[%d]",*piVar2);
          uVar4 = 0xffffffff;
        }
        else if (*(uint *)(param_1 + 0x1450) < local_18) {
          FUN_00095b4c(0,"src/rule.c",0xc5,"one msg\'s len[%ld] > archive_max_size[%ld], no rotate",
                       local_18,*(undefined4 *)(param_1 + 0x1450));
          uVar4 = 0;
        }
        else {
          iVar1 = FUN_00099160(param_1 + 0x1030,auStack_80);
          if (iVar1 == 0) {
            iStack_4c = iStack_4c + (uint)CARRY4(local_50,local_18);
            uVar5 = *(uint *)(param_1 + 0x1450);
            iVar1 = (int)uVar5 >> 0x1f;
            bVar7 = local_50 + local_18 < uVar5;
            if ((int)(iStack_4c - (iVar1 + (uint)bVar7)) < 0 ==
                (SBORROW4(iStack_4c,iVar1) != SBORROW4(iStack_4c - iVar1,(uint)bVar7))) {
              uVar6 = *(undefined4 *)(DAT_012a29e4 + 0x1428);
              uVar4 = FUN_0008eb60(param_1,param_2);
              iVar1 = FUN_0008e39c(uVar6,param_1 + 0x1030,local_18,uVar4,
                                   *(undefined4 *)(param_1 + 0x1450),
                                   *(undefined4 *)(param_1 + 0x1454));
              if (iVar1 == 0) {
                uVar4 = 0;
              }
              else {
                FUN_00095b4c(2,"src/rule.c",0xd6,"zlog_rotater_rotate fail");
                uVar4 = 0xffffffff;
              }
            }
            else {
              uVar4 = 0;
            }
          }
          else {
            piVar2 = __errno_location();
            FUN_00095b4c(1,"src/rule.c",0xca,"stat [%s] fail, errno[%d], maybe in rotating",
                         param_1 + 0x1030,*piVar2);
            uVar4 = 0;
          }
        }
      }
    }
  }
  else {
    FUN_00095b4c(2,"src/rule.c",0xa7,"zlog_format_gen_msg fail");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

